#include<stdio.h>
int main(){
    float a; int b,c,d;
    printf("Enter a number with float.\n");
    scanf("%f",&a);
    if(a<(int)a+0.5){b=a;}
    else{b=a+1;}
    if(b%2==0){
        if(a<b){d=b; c=b-2;}
        else{c=b-2; d=b+2;}
    }
    else{c=b-1; d=b+1;}
    printf("%d %d\n",c,d);
    return 0;
}
