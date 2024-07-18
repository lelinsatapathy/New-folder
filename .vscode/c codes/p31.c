#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(i%2==0){
                printf("*");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}