#include<stdio.h>
int entire_division(int D, int d, int qr[2]){
    qr[0]=0;
    if(d==0){return 0;}
    while(D>=d){
        D-=d;
        qr[0]++;
    }
    qr[1]=D;
    return -1;
}
int main(){
    int D,d,qr[2];
    printf("Enter Dividend and divisor.\n");
    scanf("%d%d",&D,&d);
    entire_division(D,d,qr);
    printf("Quotient: %d\nRemainder: %d\n",qr[0],qr[1]);
    return 0;
}