#include <stdio.h>
int main(){
    int num, n, dig, count=0;
    printf("Enter an integer number and a digit.\n");
    scanf("%d%d",&num,&dig);
    for(n=num;n!=0;n/=10){
        if(dig==n%10){count++;}
    }
    printf("The digit %d appears %d times in the number %d.\n",dig,count,num);
    return 0;
}