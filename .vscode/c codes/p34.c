#include<stdio.h>
int acr ( int a , int b);
int fact (int c);

int main(){
    int d,e,i,f;
    f=2;
    printf("enter the values for d and e:\n");
    scanf("%d %d",&d,&e);

    for(i==1;i<=d;i++){
        f = f + acr ( d , f) + fact (i);

    }
    printf("the value of f is %d:",f);

    return 0;
}
 int acr ( int a , int b){
    int x;
    x = fact (a)/fact (b);
    return(x);
 }

 int fact (int c){
    int temp =1;
    int i;
    for(i==c;i>0;i--){
        temp = temp*i;

    } 
    return(temp);
 }