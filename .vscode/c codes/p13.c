#include<stdio.h>
int main(){
    int a[10],i,min;
    printf("enter 10 numbers:%d\n");

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    min =a[0];
    for(i=1;i<10;i++){
        if(a[i]<min){
            min =a[i];

        }
    }
    printf("the min value is:%d\n",min);
    return 0;
}