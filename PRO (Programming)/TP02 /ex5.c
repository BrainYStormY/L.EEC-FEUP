#include<stdio.h>
int main(){
    float a,b;
    printf("Enter a number to be analysed.\n");
    scanf("%f",&a);
    b=a-(int)a;
    printf("Your number is %f\nHere it is with 3 decimal places %.3f\nHere's its whole part %d\nAnd here is its decimal part %f\n",a,a,(int)a,b);
}
