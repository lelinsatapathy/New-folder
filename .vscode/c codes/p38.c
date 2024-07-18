#include<stdio.h>
int main(){
    int i,number;

    printf("enter the number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        if(number % i==0){
            printf("the factors is %d\n ",i);
        }
    }
    return 0;
}