#include<stdio.h>
int product(int a , int b){
    int x;
    x=a*b;
    return(x);
}
int main(){
    int c,d,pro;
    printf("enter two numbers\n");
    scanf("%d %d",&c,&d);
    pro=product(c,d);
    printf("the product of two numbers are:%d",pro);


    return 0;
}