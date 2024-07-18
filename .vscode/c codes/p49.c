#include<stdio.h>
int main(){

    int arr[5];
    int temp;
    int i;
    int*ptr;
    ptr=&arr[0];
    printf("before reversing the array\n:");
    for(i=0;i<5;i++){
        printf("enter the value of element:");
        scanf("%d",&(*(ptr+i)));
    }
    printf("after reversing the array\n");
    for(i=0;i<5;i++){
        temp = *(ptr+(4-i));
        *(ptr+(4-i))=*(ptr+i);
        printf("enter the value of element: %d\n",temp);
    }


    return 0;
}