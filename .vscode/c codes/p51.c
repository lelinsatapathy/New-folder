#include<stdio.h>
int main(){
    int arr[3]={1,2,3};
    int*ptr1,*ptr2;
    ptr1=&arr[0];
    ptr2=ptr1+2;
    printf("the value is:%d",ptr2-ptr1);
    return 0;
}