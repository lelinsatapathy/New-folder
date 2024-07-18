#include<stdio.h>
int fibonacciseries(int n);
int main(){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);

    fibonacciseries(a);
    printf("the fibonacciseries of a is ",fibonacciseries,a);
    return 0;
}
int fibonacciseries(int n){
    if(n==0){
        return(0);
    }
    else if (n==1)
    {
        /* code */return(1);
    }
    else{
        return(fibonacciseries(n-2) + fibonacciseries(n-1));
    }
    
}