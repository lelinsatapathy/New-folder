#include<stdio.h>
int powerofnum(int n,int p){
    int c,i;
    c=n;

    for(i=1;i<p;i++){
        n=n*c;
    }
    return n;
}

int main(){
    int x,y;
    printf("enter the value of x:");
    scanf("%d",&x);

    printf("\nenter the value of y:");
    scanf("%d",&y);

    powerofnum(x,y);
    printf("the number %d when raised to power %d gives new number %d:",x,y,powerofnum(x,y));


    return 0;
}