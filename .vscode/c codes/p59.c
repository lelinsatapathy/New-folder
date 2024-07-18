#include<stdio.h>
int main(){

    int arr[7],i,j;
    int*p;
    p = arr;
       printf("the input values of array are:");
    for(i=0;i<7;i++){
     
        scanf("%d",&arr[i]);
    }

    for(j=0;j<7;j++){
        if(*(p+j) %2 == 0){
            printf("\nthe even number is %d",*(p+j));
        }
        else if(*(p+j) % 2 != 0){
            printf("\nthe odd number is %d",*(p+j));
        }
    }



    return 0;
}