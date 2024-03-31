#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,z1,z2,disc_bin;
    printf("Enter a, b and c according to the following expression:\nax^2+bx+c=0\n");
    scanf("%f%f%f",&a,&b,&c);
    while(a==0){
        printf("a cannot be 0!\nEnter a.\n");
        scanf("%f",&a);
    }
    disc_bin=b*b-4*a*c;
    z1=(-b+sqrt(disc_bin))/(2*a);
    z2=(-b-sqrt(disc_bin))/(2*a);
    if(disc_bin<0){printf("Your equation has no real solutions.\n");}
    else{printf("Your equation has the following solutions: x=%.3f and x=%.3f\n",z1,z2);}
}