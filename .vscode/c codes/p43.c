#include<stdio.h>
int main(){
    int i,rows,j,k,l=0;
    printf("enter the number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(k=0;k<=i-1;k++){
            k = k+l;
            printf("%d ",k);
        }
        printf("\n");
    }
    
    return 0;
}