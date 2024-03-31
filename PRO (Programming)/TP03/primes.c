#include<stdio.h>
int main(){
    int n,p=2;
    printf("How many primes?\n");
    scanf("%d",&n);
    printf("The first %d prime numbers are:\n",n);
    while(n!=0){
        int c=0;
        for(int i=1; i<=p; i++){
            if(p%i==0){c++;}
        }
        if(c==2){printf("%d\n",p); n--;}
        p++;
    }
}