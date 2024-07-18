#include<stdio.h>
int main(){

    int arr[4]={1,2,3,4};
    int*ptr;
    ptr = arr;
    printf("the value is %u and %u",ptr,(ptr+1));
        return 0;
}