#include <stdio.h>
int main(){
    char c;
    int lines,columns,lin,col;
    printf("Enter a character, the number of lines and the number of columns.\n");
    scanf(" %c%d%d",&c,&lines,&columns);
    for(lin=0;lin<lines;lin++){
        for(col=0;col<columns;col++){
            if((lin==0)||(col==0)||(lin==lines-1)||(col==columns-1)){printf("%c",c);}
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}