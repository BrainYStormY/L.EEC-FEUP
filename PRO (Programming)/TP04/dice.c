#include<stdio.h>
#include<stdlib.h>
int main(){
    int number,throws,fours=0;
    printf("How many throws?\n");
    scanf("%d",&throws);
    while(throws>0){
        number=rand()%6+1;
        if(number==4){fours++;}
        throws--;
    }
    printf("Face four came out %d times.\n",fours);
    return 0;
}