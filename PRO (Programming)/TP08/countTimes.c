#include<stdio.h>
void countTimes(int num, int dig, int *ptr_times){
    if(num==0&&dig==0){*ptr_times+=1;}
    while(num!=0){
        if(num%10==dig){
            *ptr_times+=1;
        }
        num/=10;
    }
}
int main(){
    int num, dig, times=0;
    printf("Enter a number and a digit.\n");
    scanf("%d%d",&num,&dig);
    countTimes(num, dig, &times);
    printf("Digit %d appears %d times in the number %d.\n", dig, times, num);
    return 0;
}