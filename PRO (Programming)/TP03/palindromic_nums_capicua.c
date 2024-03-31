#include <stdio.h>
int main(){
    int n,a,b,c;
    printf("Enter a number with 3 digits.\n");
    scanf("%d",&n);
    c=n%10;
    n/=10;
    b=c%10;
    n/=10;
    a=n;
    if(a==c){printf("It is a palindromic number (capicua).\n");}
    else{printf("It is not a palindromic number (capicua).\n");}
}