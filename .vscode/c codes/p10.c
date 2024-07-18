#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        int j;
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        int k;
        for(k=1;k<=i;k++){
            printf("%d ",i);
        }
        printf("\n");
    }
}