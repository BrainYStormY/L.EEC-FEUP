#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the values of x and y for the coordinate (x,y).\n");
    scanf("%d%d",&x,&y);
    printf("This is your coordinate: (%d,%d)\n",x,y);
    if(x>0){
        if(y>0)
        printf("Your coordinate is in the 1st Quadrant.\n");
        else if(y<0)
        printf("Your coordinate is in the 4th Quadrant.\n");
        else{printf("Your coordinate is on the Positive x-Axis.\n");}//if(y==0)
    }
    else if(x<0){
        if(y>0)
        printf("Your coordinate is in the 2nd Quadrant.\n");
        else if(y<0)
        printf("Your coordinate is in the 3rd Quadrant.\n");
        else{printf("Your coordinate is on the Negative x-Axis.\n");}//if(y==0)
    }
    else{//if(x==0)
        if(y>0)
        printf("Your coordinate is on the Positive y-Axis.\n");
        else if(y<0)
        printf("Your coordinate is on the Negative y-Axis.\n");
        else{printf("Your coordinate is the Origin.\n");}
    }
    return 0;
}