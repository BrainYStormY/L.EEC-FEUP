#include<stdio.h>
int main(){
    int n,n0,n1,n2;
    do{
        printf("Enter a number in the range [1,100].\n");
        scanf("%d",&n);
    }while(n<1||n>100);
    n0=n%10;
    n/=10;
    n1=n%10;
    n2=n/10;
    printf("Roman numeration: ");
//centenas
    if(n2==1){printf("C");}
//dezenas
    if(n1==9){printf("XC"); n1-=9;}
    else if(n1>=5){printf("L"); n1-=5;}
    else if(n1==4){printf("XL"); n1-=4;}
    while(n1!=0){printf("X"); n1--;}
//unidades
    if(n0==9){printf("IX"); n0-=9;}
    else if(n0>=5){printf("V"); n0-=5;}
    else if(n0==4){printf("IV"); n0-=4;}
    while(n0!=0){printf("I"); n0--;}
    printf("\n");
}