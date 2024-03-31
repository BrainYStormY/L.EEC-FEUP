#include<stdio.h>
int main(){
    int n;
    printf("Enter a number.\n");
    scanf("%d",&n);
    if(n<-10){printf("The number is in the range: ]-∞,-10[\n");}
    else if(5<=n&&n<45){printf("The number is in the range: [5,45[\n");}
    else if(120<n&&n<=245){printf("The number is in the range: ]120,245]\n");}
    else{printf("The number is not in any of the ranges.\n");}
}