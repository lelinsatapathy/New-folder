#include<stdio.h>
int main(){
    int i,value;
    value =1;
    printf("enter the value of i:");
    scanf("%d",&i);
    int a;

    for ( a =i ; a>0; a--)
    {
        /* code */value = a*value;
    }
    printf("the factorial is:%d",value);
    
    return 0;
}