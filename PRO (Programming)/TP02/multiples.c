#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers.\n");
    scanf("%d%d",&a,&b);
    if(b==0)
    printf("Second number cannot be 0!");
    if(a%b==0)
    printf("%d is a multiple of %d.\n",a,b);
    else{printf("%d is not a multiple of %d.\n",a,b);}
}