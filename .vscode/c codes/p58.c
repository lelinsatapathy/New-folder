#include<stdio.h>
void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

    int c,d;
    int*x;
    int*y;
    x=&c;
    y=&d;
    printf("enter the value of c:");
    scanf("%d",&c);

    printf("\nenter the value of d:");
    scanf("%d",&d);

    printf("before swapping the numbers are %d and %d",c,d);

    swap(x,y);

    printf("\nafter swapping the numbers are %d and %d",c,d);


    return 0;
}