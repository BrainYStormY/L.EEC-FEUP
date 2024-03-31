#include<stdio.h>
void multiSpec(int vsize, int v1[], int v2[], int vR[]){
    for(int i=0; i<vsize; i++)
    {
        vR[i]=v1[i]*v2[vsize-1-i];
    }
}
int main(){
    int vsize;
    printf("How many elements?\n");
    scanf("%d",&vsize);
    int v1[vsize], v2[vsize], vR[vsize];
    printf("Vector 1:\n");
    for(int i=0; i<vsize; i++)
    {
        scanf("%d",&v1[i]);
    }
    printf("Vector 2:\n");
    for(int j=0; j<vsize; j++)
    {
        scanf("%d",&v2[j]);
    }
    multiSpec(vsize, v1, v2, vR);
    printf("Special multiplication: {");
    for(int k=0; k<vsize; k++)
    {
        printf("%d",vR[k]);
        if(k!=vsize-1){printf(" ");}
    }
    printf("}\n");
    return 0;
}