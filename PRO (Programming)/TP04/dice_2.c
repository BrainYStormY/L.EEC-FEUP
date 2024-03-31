#include<stdio.h>
#include<stdlib.h>
int aleatorio(int limiteInferior, int limiteSuperior){
    int dif=limiteSuperior-limiteInferior+1,roll;
    roll=rand()%dif+limiteInferior;
    return roll;
}
int main(){
    int number,throws,fours=0;
    printf("How many throws?\n");
    scanf("%d",&throws);
    while(throws>0){
        number=aleatorio(1,6);
        if(number==4){fours++;}
        throws--;
    }
    printf("Face four came out %d times.\n",fours);
    return 0;
}