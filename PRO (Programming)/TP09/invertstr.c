#include<stdio.h>
#include<string.h>
void invert(char *originalstr, char *invertstr){
    int tam=strlen(originalstr);
    int j=tam;
    for(int i=0;i<=tam-2;i++){
        invertstr[i]=originalstr[j-2];
        j--;
    }
    invertstr[tam-1]='\0';
}
int main(){
    char originalstr[9999], invertstr[9999];
    printf("Write a sentence.\n");
    fgets(originalstr,9999,stdin);
    invert(originalstr,invertstr);
    puts(invertstr);
    return 0;
}