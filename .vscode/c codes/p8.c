#include<stdio.h>

int main(){
    int a,b,c;
    printf("the value of the number is: %d",a);
    scanf("%1.4d",&a);
    
    for(b=0;b<a;b++){
        for(c=1;c<=4-b;c++){
            if(b%2==0){
                printf("*");
            }
            else{
                printf("&");
            }
        }
        printf("\n");
    }
    return 0;
}