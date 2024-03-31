#include <stdio.h>
int main(){
    int num1, n1, num2, n2;
    printf("Enter two numbers.\n");
    scanf("%d%d",&num1,&num2);
    n2=num2;
    for(n1=num1;n1!=0;n1/=10){
        if(n2%10==n1%10){
            n2/=10;
            if(n2==0){printf("The number %d is contained in the number %d.\n",num2,num1);break;}
        }
        else{n2=num2;}
        if((n1/10)==0){printf("The number %d is not contained in the number %d.\n",num2,num1);}
    }
    return 0;
}