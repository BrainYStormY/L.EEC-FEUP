#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two distinct numbers.\n");
    scanf("%d%d",&a,&b);
    printf("The first number is %d.\nThe second number is %d.\n",a,b);
    /*a becomes a+b*/a+=b;
    /*b becomes a=a+b-b*/b=a-b;
    /*a becomes b=a+b-a*/a-=b;
    printf("Now, the first number is %d.\nAnd the second number is %d.\n",a,b);
}