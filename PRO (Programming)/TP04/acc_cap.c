#include<stdio.h>
#include<math.h>
int main(){
    float st_cap,acc_cap,int_rate; int years;
    printf("What is the starting capital?\n");
    scanf("%f",&st_cap);
    printf("What is the annual interest rate to be applied?\n");
    scanf("%f",&int_rate);
    printf("For how many years?\n");
    scanf("%d",&years);
    acc_cap=st_cap*pow(1+(int_rate/100),years);
    printf("The accumulated capital after %d years is %.3f€.\n",years,acc_cap);
    return 0;
}