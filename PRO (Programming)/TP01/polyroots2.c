#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root1,root2;
    printf("Enter the values of a, b and c in the following expression to solve the equation in order to x.\nax^2+bx+c=0\n");
    scanf("%f%f%f",&a,&b,&c);
    root1=(-b-sqrtf(b*b-4*a*c))/(2*a);
    root2=(-b+sqrtf(b*b-4*a*c))/(2*a);
    printf("The solution(s) of the equation\n%fx^2+%fx+%f=0 are\nx=%f v x=%f\nor\nS={%f,%f}\n",a,b,c,root1,root2,root1,root2);
}