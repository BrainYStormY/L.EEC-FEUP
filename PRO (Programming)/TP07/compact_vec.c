#include<stdio.h>
int compact(char orig[], int N, char dst[]){
    int i=0, c=0;
    do{
        if(i==0){
            dst[c]=orig[i];
            c++;
        }
        else if(orig[i]!=orig[i-1]){
            dst[c]=orig[i];
            c++;
        }
        i++;
    }while(i<N);
    return c;
}
int main(){
    char v[99999], u[99999]; int c=0, tam;
    printf("Enter your string. Enter '.' to finish entry.\n");
    for(int i=0; i<99999; i++){
        scanf(" %c",&v[i]);
        if(v[i]=='.'){break;}
        c++;
    }
    printf("Your string is:\n");
    for(int i=0; i<c; i++){printf("%c",v[i]);}
    tam=compact(v, c, u);
    printf("\nYour compacted string is:\n");
    for(int i=0; i<tam; i++){printf("%c",u[i]);}
    printf("\n");
    return 0;
}