#include<stdio.h>
int main(){
    int arr[5],temp,i;
    arr[5]= {1,2,3,4,5};
    for(i=0;i<5/2;i++){
    temp = arr[i];
    arr[i]=arr[4-i];
    arr[4-i]=temp;

    }
    printf("the swaping value is:%d",temp);
    return 0;
}