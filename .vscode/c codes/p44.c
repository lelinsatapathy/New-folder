#include<stdio.h>
int main(){
    int rows,i,j,k;
    printf("enter the number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(k=0;k<=(2*i)-2;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}