#include<stdio.h>
int main(){
    int time,sec=0,min=0,hour=0,day=0;
    printf("Enter time in seconds.\n");
    scanf("%d",&time);
    printf("%d seconds correspond to ",time);
    while(time>86400){
        time-=86400; day+=1;
    }
    while(time>=3600){
        time-=3600; hour+=1;
    }
    while(time>=60){
        time-=60; min+=1;
    }
    while(time>0){
        time--; sec++;
    }
    printf("%d day(s), %d hour(s), %d minute(s) and %d second(s)\n",day,hour,min,sec);
    return 0;
}