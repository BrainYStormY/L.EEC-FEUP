#include<stdio.h>
int main(){
    float k,f,c;
    printf("Enter temperature in Celsius.\n");
    scanf("%f",&c);
    k=c+273.15;f=c*9/5+32;
    printf("Temperature in Kelvin: %.2f K\nTemperature in Fahrenheit: %.2f F\n",k,f);
}
