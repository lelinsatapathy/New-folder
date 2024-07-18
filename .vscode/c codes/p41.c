#include<stdio.h>
int main(){
    int reversed,num;
    printf("enter the value of number:");
    scanf("%d",&num);
    reversed = 0;

    while(num!=0){
        reversed = reversed*10 + num%10;
        num = num/10;
    }
    printf("the reversed number is %d\n",reversed);

    if(num==reversed){
        printf("\nthe number is palindrome:");
    }
    else{
        printf("\nthe number is not palindrome");
    }
    return 0;
}