#include<stdio.h>
int main(){
    int a;
    int b=2;
    printf("enter the value of a:%d",a);
    scanf("%d",&a);

    do
    {
        /* code */b=b+3;
        printf("%d\n",b);
    } while (b<a);
    
    return 0;
}