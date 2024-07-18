#include<stdio.h>

int main(){
    int x[3][4];
    int i,j;     for ( i = 0; i <3; i++) {
        for(j=0;j<4;j++){
            if(i<j){
                x[i][j]=4;
            }
            else{
                x[i][j]=0;
            }
        }
    }
    printf("the output is %d\n:",i,j,x[i][j]);
    
    
    return 0;
}