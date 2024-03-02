#include <stdio.h>
int main(){
    int nB3, nB2, nB1, nB0, nD, nO1, nO0; char nH;
    printf("Enter your binary number's four bits separately.\n");
    scanf("%d%d%d%d",&nB3, &nB2, &nB1, &nB0);
    nD=8*nB3+4*nB2+2*nB1+nB0;
    nO1=nB3, nO0=4*nB2+2*nB1+nB0;
    if(nD<=9){nH=(char)nD;}
    else if(nD==10){nH='A';}
    else if(nD==11){nH='B';}
    else if(nD==12){nH='C';}
    else if(nD==13){nH='D';}
    else if(nD==14){nH='E';}
    else if(nD==15){nH='F';}
    printf("Your number in decimal base: %d\nYour number in octal base: %d%d\nYour number in hexadecimal base: %c\n",nD, nO1, nO0, nH);
}