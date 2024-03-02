#include<stdio.h>
int main(){
    float pi=3.1416,r,A,P;
    printf("Enter radius of the circumference.\n");
    scanf("%f",&r);
    P=2*pi*r;A=pi*r*r;
    printf("Perimeter of circumference: %f\nArea of circumference: %f\n",P,A);
}
