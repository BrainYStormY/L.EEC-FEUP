#include<stdio.h>
int main(){
    float Pa,Pb,GRa,GRb;
    int year=0;
    printf("Enter the population (in millions) and annual growth rate (in %%) of each country.\nREMEMBER!\nAt the beginning, the population of Country A must be higher than the population of Country B.\nThe annual growth rate of Country A must be lower than that of Country B.\nInitial population of Country A (in millions): ");
    scanf("%f",&Pa);
    printf("Annual growth rate of Country A (in %%): ");
    scanf("%f",&GRa);
    printf("Initial population of Country B (in millions): ");
    scanf("%f",&Pb);
    printf("Annual growth rate of Country B (in %%): ");
    scanf("%f",&GRb);
    if(Pa>Pb&&GRa<GRb){
        while((int)Pa>(int)Pb){
            Pa+=(Pa*GRa)/100;
            Pb+=(Pb*GRb)/100;
            year++;
        }
        printf("The population of Country B will be higher than that of Country A in %d years.\n",year);
    }
    else{
        printf("REMEMBER!\nAt the beginning, the population of Country A must be higher than the population of Country B and the annual growth rate of Country A must be lower than that of Country B!\n");
    }
}