#include<stdio.h>
void powerup(int n , int p){
    int c,i;
    c=n;
    for(i=1;i<p;i++){
        n=n*c;

    }
}
int main(){
    int x,y,l;
    printf("enter the number of terms:");
    scanf("%d",&x);

    printf("enter the power:");
    scanf("%d",&y);
    l=+powerup(x , y);
    printf("%d",l);


    return 0;
}