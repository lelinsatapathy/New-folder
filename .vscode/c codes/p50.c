#include<stdio.h>
int main(){

    int a=6;
    int b=3;
    a=(a=3)||(b=0);
    printf("the value of a is %d",a);


    return 0;
}