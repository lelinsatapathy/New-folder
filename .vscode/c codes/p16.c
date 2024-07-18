#include<stdio.h>

int main(){
    int a,b,c,max;

    printf("enter three numbers:%d \n",a,b,c);
    scanf("%d %d %d",&a ,&b, &c);

    max =a;
    if (b>max)
    {
        /* code */max =b;
    }
    else if(c>max){
        max =c;
    }
    printf("the maximum value is :%d",max);
    
    
    
    

    return 0;
}