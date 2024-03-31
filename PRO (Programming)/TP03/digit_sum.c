#include<stdio.h>
int main(){
    int a,sum=0,r;
    printf("Enter an integer number.\n");
    scanf("%d",&a);
    printf("Your number is %d.\n",a);
    while(a!=0){
        r=a%10;
        a/=10;
        sum+=r;
    }
    printf("The sum of your number's digits is %d.\n",sum);
    return 0;
}