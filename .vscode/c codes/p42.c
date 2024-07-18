#include<stdio.h>
int armstrong (int x){
    int reversed,r,c;
    x=c;
    reversed =0;
    while(x!=0){
        r = x%10;
        reversed = r*r*r + reversed;
        x = x/10;

    }
    if(reversed==c){
        return ("the number is armstrong");
    }
    else if(reversed!=c){
        return ("the number is not armstrong");
    }
}
int main(){
    int num;
    printf("enter the value of number:");
    scanf("%d",&num);

    armstrong (num);
    printf("the number is armstrong %d %d",num,armstrong (num));
    return 0;
}