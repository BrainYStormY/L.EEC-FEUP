#include<stdio.h>
int main(){
    char gender; float height, weight;
    printf("Enter height (in meters)\n");
    scanf("%f",&height);
    printf("Enter gender (M/F)\n");
    scanf(" %c",&gender);
    switch(gender){
        case 'M': weight=72.7*height-58; break;
        case 'F': weight=62.1*height/44.7; break;
    }
    printf("Ideal weight would be %.2f kilograms.\n",weight);
    return 0;
}