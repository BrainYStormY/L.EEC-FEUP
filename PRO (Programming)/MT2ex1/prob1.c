#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXSTR 15
#define MAXV 25
#define EURO_KM 0.10

float lat_origem=41.14961, lon_origem=-8.61099;

float haversine(float lat1, float lon1, float lat2, float lon2);

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

int leViagens(char cidades[][MAXSTR], float latitudes[], float longitudes[], int portagens[])
{
    int n=0, p;
    char c[MAXSTR];
    float l1, l2;
    for(int i=0; i<MAXV; i++){
        if(scanf("%s %f %f %d", c, &l1, &l2, &p) == 4){
            strcpy(cidades[i], c);
            latitudes[i] = l1;
            longitudes[i] = l2;
            portagens[i] = p;
            n++;
        }
        else break;
    }
    return n;
}

void calculaCustos(char cidades[][MAXSTR], float latitudes[], float longitudes[], int portagens[], int n, int *maisBarato, float *custoFinal)
{
    float x, y;
    for(int i=0; i<n; i++){
        x = haversine(lat_origem, lon_origem, latitudes[i], longitudes[i]);

        y = portagens[i] + x * EURO_KM;
        if(i == 0){
            *custoFinal = y;
            *maisBarato = i;
        }
        else if(y < *custoFinal){
            *custoFinal = y;
            *maisBarato = i;
        }
    }
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/ 

int main() 
{
    char cidades[MAXV][MAXSTR]={0};
    float latitudes[MAXV] = {0};
    float longitudes[MAXV] = {0};
    int portagens[MAXV] = {0};
    int n=0;

    n = leViagens(cidades, latitudes, longitudes, portagens);
    if(n > 0)
    {
        printf("\nForam processadas %d cidades\n", n);
        for(int i = 0; i < n; i++)
        {
            printf("Cidade: %s. %d euros. Coordenadas (%f, %f)\n", cidades[i], portagens[i], latitudes[i], longitudes[i]);
        }
    }
    else {
        printf("\nForam processadas 0 cidades\n\n");
        return 1;
    }
    
    int maisBarato = 0;
    float custoFinal;
    calculaCustos(cidades, latitudes, longitudes, portagens, n, &maisBarato, &custoFinal);

    printf ("\nA cidade mais barata para viajar é %s, com custo de %.2f euros\n\n", cidades[maisBarato], custoFinal);

    return 0;
}

// Calcula a distancia entre dois pontos
float haversine(float lat1, float lon1, float lat2, float lon2)
{
    float dLat = (lat2 - lat1) * M_PI / 180.0;
    float dLon = (lon2 - lon1) * M_PI  / 180.0;
 
    // Converte para radianos
    lat1 = (lat1) * M_PI / 180.0;
    lat2 = (lat2) * M_PI / 180.0;
 
    // Formula de Haversine
    float a = pow(sin(dLat / 2), 2) + pow(sin(dLon / 2), 2) * cos(lat1) * cos(lat2);
    float rad = 6371;
    float c = 2 * asin(sqrt(a));
    return rad * c;
}