#include<stdio.h>
int main(){
    int arr[10];
    int i,j,max,min,a,b,k,l,m;
    float c;

    printf("enter the elements of array:");

    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[9];

    for(j=0;j<9;j++){
        for(k=j+1;k<9;j++){
            if(arr[j]>arr[k] && arr[j]<arr[9]);
        }
        
    }
    a=arr[j];
    printf("the 2nd largest is %d",arr[j]);

    min=arr[0];

    for(l=1;l<10;l++){
        for(m=l+1;m<10;m++){
            if(arr[l]<arr[m] && arr[l]>arr[0]);
        }
    }
    b=arr[l];
    printf("the second smallest is:%d",arr[l]);

    c=a+b;

    printf("%0.2f",c);

    return 0;


}