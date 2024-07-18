#include<stdio.h>
int main(){
    int num,power,i,c;
    printf("enter the number:");
    scanf("%d",&num);

    printf("\nenter the power:");
    scanf("%d",&power);

    c=num;

    for(i=1;i<power;i++){
        num = num*c;

    }
    printf("\nthe new number after raising the old number to its power is: %d",num);
    return 0;
}