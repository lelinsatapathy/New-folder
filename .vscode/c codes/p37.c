#include<stdio.h>
int main(){
    int arr[10],i,min,max;

    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    
    min = arr[0];
        if(arr[i]<min){
            min = arr[i];
            printf("the minimum value is:%d",min);
        }

    
    max = arr[9];
        if(arr[i]>max){
            max = arr[i];
            printf("the maximum value is:%d",max);
        }
    }
    return 0;
}