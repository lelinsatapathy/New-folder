#include<stdio.h>
int main(){
    int a[10],i,max;
    printf("enter the value of 10 numbers:\n %d");

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<9;i++){
        if(a[i]>max){
            max = a[i];
        }
        else{
            max =a[9];
        }
        
    }
    printf("the maximum value is:%d",max);
    return 0;
}