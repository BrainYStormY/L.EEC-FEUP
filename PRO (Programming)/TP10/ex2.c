#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TAM 40      /* Máximo número de caracteres da string */
#define MAX_COMPR 100   /* Máximo número de caracteres a ler */
#define MAX_PRODS 100   /* Máximo número de artigos no armazém */

/* Registo para um artigo do armazém */
typedef struct {
    char nome[MAX_TAM];     /* Designação do artigo */
    char marca[MAX_TAM];    /* Marca do artigo */
    char modelo[MAX_TAM];   /* Modelo do artigo */
    float preco;            /* Preço do artigo */
    int quant;              /* Quantidade disponível */
} artigo;

/** 
 *  @brief  Preencher o armazém, lendo o conteúdo de um ficheiro de texto.
 *  @param  armazem array de artigos a preeencher
 *  @return Número de artigos lidos
 *  @note   Cada linha do ficheiro corresponde a um artigo e tem o seguinte formato:
 *          nome marca modelo preco quant
 */
int leArtigos(artigo armazem[])
{
    int n=0;
    while(1){
        if(scanf(" %s",armazem[n].nome)==EOF){break;}   //se, ao tentar ler a primeira introdução, não houver mais nada para ler, para a leitura
        scanf(" %s",armazem[n].marca);                  //caso haja uma primeira introdução nesta linha, prossegue-se com as seguintes leituras
        scanf(" %s",armazem[n].modelo);
        scanf("%f",&armazem[n].preco);
        scanf("%d",&armazem[n].quant);
        n++;                                            //contabilizar que foi lido um artigo por completo
    }
    return n;                                           //retornar o número de artigos lidos após terminada a leitura
}

/** 
 *  @brief  Calcular o número de artigos de determinada marca e modelo.
 *  @param  armazem array de artigos
 *  @param  n número de artigos em 'armazem'
 *  @param  marca marca dos artigos a procurar
 *  @param  modelo modelo dos artigos a procurar
 *  @return Número de artigos de determinada marca e modelo
 */
int totalArtigos(artigo armazem[], int n, char *marca, char *modelo)
{
    for(int i=0; i<n; i++){ //procura em todos os artigos
        if(strcmp(armazem[i].marca, marca)==0){         //se a marca corresponder, verifica o modelo
            if(strcmp(armazem[i].modelo, modelo)==0){   //se o modelo corresponder,
                return armazem[i].quant;                //retorna o número de artigos correspondentes
            }
        }
    }
    return 0;                                           //se não tiver sido encontrado nenhum artigo correspondente, retorna 0
}

/** 
 *  @brief  Listar os artigos com stock inferior a determinado valor.
 *  @param  armazem array de artigos
 *  @param  n número de artigos em 'armazem'
 *  @param  stock_lim limite para a quantidade dos artigos a procurar
 *  @return void
 *  @note   Imprime os artigos de stock inferior ao parâmetro 'stock_lim' no seguinte formato: quant\tnome marca modelo.
 */
void alertaArtigos(artigo armazem[], int n, int stock_lim)
{
    for(int i=0; i<n; i++){
        if(armazem[i].quant<stock_lim){
            printf("%d\t%s %s %s\n", armazem[i].quant, armazem[i].nome, armazem[i].marca, armazem[i].modelo);
        }
    }
}

/** 
 *  @brief  Ordenar os artigos pela sua quantidade.
 *  @param  armazem array de artigos
 *  @param  n número de artigos em 'armazem'
 *  @return void
 *  @note   Imprime os artigos em stock ordenados no seguinte formato: quant\tnome marca modelo.
 */
void ordenaArtigos(artigo armazem[], int n)
{
    /*
    int aux_int;
    float aux_flt;
    char aux_str[MAX_TAM];
    */
    artigo aux;
    printf("\nProdutos em stock (ordenados):\n");                                                           //imprimir título
    for(int i=0; i<n; i++){                                                                                 //para todas as posições
        for(int j=i+1; j<n; j++){                                                                           //comparam-se os valores de todas as posições que sucedem e
            if(armazem[i].quant>armazem[j].quant){                                                          //sempr que algum deles for menor, trocam-se os artigos de posição
                /*
                conteúdo correto mas pode ser feito de forma mais simples
                //troca de quantidades
                aux_int=armazem[i].quant;
                armazem[i].quant=armazem[j].quant;
                armazem[j].quant=aux_int;
                //troca de preços
                aux_flt=armazem[i].preco;
                armazem[i].preco=armazem[j].preco;
                armazem[j].preco=aux_flt;
                //troca de nomes
                strcpy(aux_str,armazem[i].nome);
                strcpy(armazem[i].nome,armazem[j].nome);
                strcpy(armazem[j].nome,aux_str);
                //troca de marcas
                strcpy(aux_str,armazem[i].marca);
                strcpy(armazem[i].marca,armazem[j].marca);
                strcpy(armazem[j].marca,aux_str);
                //troca de modelos
                strcpy(aux_str,armazem[i].modelo);
                strcpy(armazem[i].modelo,armazem[j].modelo);
                strcpy(armazem[j].modelo,aux_str);
                */
                aux=armazem[i];
                armazem[i]=armazem[j];
                armazem[j]=aux;
            }
        }
        printf("%d\t%s %s %s\n", armazem[i].quant, armazem[i].nome, armazem[i].marca, armazem[i].modelo);   //imprimir o artigo de cada posição (à medida que são posicionados)
    }
}

int main()
{
    artigo storage[MAX_PRODS];
    int lim = 10, n_prod = 0;

    n_prod = leArtigos(storage);
    printf("\nProdutos:\n");
    for (int i = 0; i < n_prod; i++) printf("- %s %s %s | %d | %.2f€\n", storage[i].nome, storage[i].marca, storage[i].modelo, storage[i].quant, storage[i].preco);
    printf("TOTAL: %d\n", n_prod);

    printf("\nHá %d artigo(s) da marca %s e modelo %s.\n", totalArtigos(storage, n_prod, "Grapple", "10.2"), "Grapple", "10.2");
    
    printf("\nArtigos com stock inferior a %d unidades:\n", lim);
    alertaArtigos(storage, n_prod, lim);
    
    ordenaArtigos(storage, n_prod);

    printf("\n");
    return 0;
}