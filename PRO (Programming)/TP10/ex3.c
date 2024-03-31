#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAM 60      /* Máximo número de caracteres da string */
#define MAX_COMPR 200   /* Máximo número de caracteres a ler */
#define MAX_LIVROS 50   /* Máximo número de livros */

/* Registo para um livro */
typedef struct {
    char titulo[MAX_TAM];   /* Título do livro */
    char autor[MAX_TAM];    /* Autor do livro */
    char lingua[MAX_TAM];   /* Língua do livro */
    int ano;                /* Ano do livro */
} livro;

/** 
 *  @brief  Preencher a base de dados, lendo o conteúdo de um ficheiro de texto.
 *  @param  lista array de livros a preeencher
 *  @return Número de livros na base de dados
 *  @note   Cada linha do ficheiro corresponde a um livro e tem o seguinte formato:
 *          titulo|autor|ano|lingua
 */
int registarLivros(livro lista[])
{
    int n=0;
    while(1){
        if(scanf(" %59[^|]|",lista[n].titulo)==EOF){break;}
        scanf(" %59[^|]|",lista[n].autor);
        scanf(" %d|",&lista[n].ano);
        scanf(" %s",lista[n].lingua);
        n++;
    }
    return n;
}

/** 
 *  @brief  Ordenar os livros por ordem alfabética do título.
 *  @param  lista array de livros
 *  @param  n número de livros em 'lista'
 *  @param  lista_ord array de livros ordenados por ordem alfabética
 *  @return 0 em caso de sucesso ou -1 em caso de erro.
 *  @note   Deve ser verificado se o valor de 'n' é válido (superior a zero).
 */
int ordenaLivros(livro lista[], int n, livro lista_ord[])
{
    if(n<=0){return -1;}
    livro aux;
    for(int i=0; i<n; i++){
        lista_ord[i]=lista[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(lista_ord[j].titulo,lista_ord[i].titulo)<0){
            aux=lista_ord[j];
            lista_ord[j]=lista_ord[i];
            lista_ord[i]=aux;
            }
        }
    }
    return 0;
}

/** 
 *  @brief  Calcular o número de livros publicados a partir de determinado ano.
 *  @param  lista array de livros
 *  @param  n número de livros em 'lista'
 *  @param  ano ano a partir do qual se pretende verificar quantos livros foram publicados
 *  @return Número de livros publicados a partir do ano 'ano' (inclusive). Em caso de erro, retorna -1.
 *  @note   Deve ser verificado se os valores de 'n' e 'ano' são válidos (superiores a zero).
 */
int publicados(livro lista[], int n, int ano)
{
    int c=0;
    if(n<=0||ano<=0){return -1;}
    for(int i=0; i<n; i++){
        if(lista[i].ano>=ano){c++;}
    }
    return c;
}

/** 
 *  @brief  Selecionar os livros cuja primeira letra do nome do autor se encontra entre dois caracteres.
 *  @param  lista array de livros
 *  @param  n número de livros em 'lista'
 *  @param  c1 caracter (letra minúscula)
 *  @param  c2 caracter (letra minúscula)
 *  @param  lista_selec array de livros cuja primeira letra do nome do autor se encontra entre 'c1' e 'c2'
 *  @return Número de livros selecionados. Em caso de erro, retorna -1.
 *  @note   Deve ser verificado se o valor de 'n' é válido (superior a zero).
 *  @note   Os valores de 'c1' e 'c2' devem ser válidos (entre a e z e 'c1' < 'c2').
 *  @note   No caso de 'c1' ser igual a 'c2', deve ser calculado o número de livros cuja primeira letra do nome do autor é igual a 'c1'.
 */
int selecionaLivros(livro lista[], int n, char c1, char c2, livro lista_selec[])
{
    int c=0;
    if(n>0&&c2<='z'&&c2>=c1&&c1>='a'){}
    else{return -1;}
    if(c1==c2){
        for(int i=0; i<n; i++){
            if(lista[i].autor[0]==toupper(c1)){
                lista_selec[c]=lista[i];
                c++;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(lista[i].autor[0]>=toupper(c1)&&lista[i].autor[0]<=toupper(c2)){
                lista_selec[c]=lista[i];
                c++;
            }
        }
    }
    return c;
}

/** 
 *  @brief  Listar os livros de uma base de dados.
 *  @param  lista array de livros
 *  @param  n número de livros em 'lista'
 *  @return void
 */
void imprimirLivros(livro lista[], int n)
{
    printf("Ano     |  Língua  |  Autor\t\t\t|  Título\n");
    for (int i = 0; i < 105; i++) printf("-");
    printf("\n");
    for (int i = 0; i < n; i++) printf("%-7d |  %-7s |  %-25s |  %s\n", lista[i].ano, lista[i].lingua, lista[i].autor, lista[i].titulo);
}

int main()
{
    livro db[MAX_LIVROS], db_sort[MAX_LIVROS], db_selec[MAX_LIVROS];
    int n_liv = 0, ano_lim = 2002, n_selec = 0;
    char c_low = 'd', c_up = 'f';

    n_liv = registarLivros(db);
    printf("\n");
    imprimirLivros(db, n_liv);
    printf("\nTOTAL: %d\n", n_liv);

    ordenaLivros(db, n_liv, db_sort);
    printf("\n> Livros ordenados por título <\n");
    imprimirLivros(db_sort, n_liv);

    printf("\nHá %d livro(s) publicados a partir de %d.\n", publicados(db, n_liv, ano_lim), ano_lim);

    n_selec = selecionaLivros(db, n_liv, c_low, c_up, db_selec);
    printf("\nHá %d livro(s) cujo autor se encontra entre %c e %c.\n", n_selec, toupper(c_low), toupper(c_up));
    imprimirLivros(db_selec, n_selec);

    printf("\n");
    return 0;
}