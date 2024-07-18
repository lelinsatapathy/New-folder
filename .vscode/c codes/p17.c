#include<stdio.h>

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else
    {
        return (num*factorial(num-1));
    }
    }

    int main(){
        int num;
        printf("enter value of num");
        scanf("%d",&num);
        printf("the factorial of %d  is %d\n",num,factorial(num));
        return 0;
    }
    
