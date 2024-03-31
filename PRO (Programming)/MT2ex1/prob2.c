#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTRING 50
#define MAXREG 150
#define FICHEIRO "resultados.txt"

typedef struct
{
    int horas;
    int minutos;
    int segundos;
} tempo;

typedef struct
{
    char nome[MAXSTRING];
    char nacionalidade[MAXSTRING];
    int dorsal;
    tempo intermedio;
    tempo final;
} atleta;

int segundos(tempo t)
{
    return t.horas * 3600 + t.minutos * 60 + t.segundos;
}

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

float resultadosMedia(atleta v[], int n, char *nacionalidade, char *nomeFicheiro)
{
    FILE *f;
    f = fopen(nomeFicheiro, "w");
    if(f == NULL) return -1;
    float meida, soma=0;
    int c=0;
    for(int i=0; i<n; i++){
        if(strcmp(v[i].nacionalidade, nacionalidade) == 0){
            soma += segundos(v[i].final);
            c++;
            fprintf(f, "%d - %s\n", v[i].dorsal, v[i].nome);
        }
    }
    meida = soma / c;
    return meida;
}

void topMetadeFinal(atleta v[], int n, int topN, atleta resultados[])
{
    int t[n], c=0;
    atleta apurados[n], aux;
    for (int i = 0; i < n; i++){

        if (segundos(v[i].intermedio) >= 9000 /*2h30m*/){ //filtrar apurados
            continue;
        }
        else{ //colocar apurados
            apurados[c] = v[i];
            c++;
        }
    }
    for(int i=0; i < c-1; i++){
        for(int j=i+1; j < c; j++){ //ordenar apurados
            if((segundos(apurados[j].final) - segundos(apurados[j].intermedio)) < (segundos(apurados[i].final) - segundos(apurados[i].intermedio))){
                aux = apurados[i];
                apurados[i] = apurados[j];
                apurados[j] = aux;
            }
        }
    }
    for(int i=0; i < topN; i++){ //colocar topN
        resultados[i] = apurados[i];
    }
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/

int lerResultados(char *ficheiro, atleta *pv, int n);
void imprimeResultados(atleta v[], int n);

int main()
{
    atleta v[MAXREG] = {0};
    atleta topv[MAXREG] = {0};
    int n = 0;
    char *pais = "Brazil";
    char nomeFicheiro[MAXSTRING];
    float media;

    n = lerResultados(FICHEIRO, v, MAXREG);
    // printf("\nEntradas lidas=%d\n", n);
    // imprimeResultados(v, n);

    strcpy(nomeFicheiro, pais);
    strcat(nomeFicheiro, ".txt");
    media = resultadosMedia(v, n, pais, nomeFicheiro);
    printf("\nMedia (%s): %02d:%02d:%02d\n", pais, (int)media / 3600, ((int)media % 3600) / 60, ((int)media % 3600) % 60);

    topMetadeFinal(v, n, 10, topv);
    printf("\nMetade final da maratona (top 10):\n");
    imprimeResultados(topv, 10);
    printf("\n");
}

tempo lerTempo(char *str)
{
    tempo t;
    sscanf(str, "%d:%d:%d", &t.horas, &t.minutos, &t.segundos);
    return t;
}

int lerResultados(char *ficheiro, atleta *pv, int n)
{
    FILE *f;
    const char *sep = ",";
    char *token;
    char linha[200] = {0};
    int i = 0, linec = 0;

    f = fopen(ficheiro, "r");
    if (f == NULL)
    {
        return -1;
    }

    while (fgets(linha, sizeof(linha), f) != NULL)
    {
        linha[strlen(linha) - 1] = '\0';
        if (linec > n)
        {
            fclose(f);
            return -1;
        }

        token = strtok(linha, sep);
        strcpy(pv[linec].nome, token);
        token = strtok(NULL, sep);
        pv[linec].dorsal = atoi(token);
        token = strtok(NULL, sep);
        pv[linec].intermedio = lerTempo(token);
        token = strtok(NULL, sep);
        pv[linec].final = lerTempo(token);
        token = strtok(NULL, sep);
        strcpy(pv[linec].nacionalidade, token);
        linec++;
    }
    fclose(f);
    return linec;
}

void imprimeTempo(tempo t)
{
    printf("%02d:%02d:%02d", t.horas, t.minutos, t.segundos);
}

void imprimeAtleta(atleta c)
{
    printf("%3d | %18s | %12s | ", c.dorsal, c.nome, c.nacionalidade);
    imprimeTempo(c.intermedio);
    printf(" | ");
    imprimeTempo(c.final);
    printf("\n");
}

void imprimeResultados(atleta v[], int n)
{
    int iter = 0;
    if(n == 0) return;
    for (iter = 0; iter < 3; iter++)
        imprimeAtleta(v[iter]);
    printf("...\n");
    iter = n - 1;
    imprimeAtleta(v[iter]);
}
