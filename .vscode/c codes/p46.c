#include<stdio.h>
int main(){
    int arr1[6],i;
    printf("the original array is:");

    for(i=0;i<6;i++){
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<6;i++){
        arr1[i]=arr1[5-i];
        printf("%d",arr1[i]);
        
    }
    return 0;
}