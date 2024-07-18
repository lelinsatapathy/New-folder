#include<stdio.h>
int main(){
    int rows,i,j;
    printf("enter the value of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}