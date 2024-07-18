#include<stdio.h>
int main(){
    int rows,i,j,k;
    printf("enter the value of rows:");
    scanf("%d",&rows);
    for(i==1;i<=rows;i++){
        for(j==1;j<=5-i;j++){

            printf(" ");
        }
        for(k==1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    printf("the pattern is:\n");
    return 0;
}