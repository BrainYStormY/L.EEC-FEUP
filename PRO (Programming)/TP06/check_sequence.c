#include <stdio.h>
int countRep (int v[], int vsize, int num){
    int max=0, count, s=0;
    while(s<vsize){
        count=0;
        while(v[s]==num){
            count++;
            s++;
        }
        if(count>max){
            max=count;
        }
        if(v[s]!=num){s++;}
    }
    return max;
}
int main(){
    int vsize, v[99999], i=0, num;
    while(1){
        printf("Enter a number.\n");
        scanf("%d",&v[i]);
        if(v[i]<0){break;}
        i++;
    }
    vsize=i-1;
    printf("Enter a number to search.\n");
    scanf("%d",&num);
    printf("Maximum sequence of number %d is %d.\n",num,countRep(v, vsize, num));
    return 0;
}