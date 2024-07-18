#include<stdio.h>
int main(){

    int arr1[5];
    int*ptr;
    ptr=arr1;
    int i=0;
    printf("enter the value of array:");

    while(i<5){
       
        scanf("%d\n",&arr1[i]);
        i++;
    }
    for(i=0;i<5;i++){
        printf("the value of element of array is %d\n",*(ptr+i));
    }
    return 0;
}