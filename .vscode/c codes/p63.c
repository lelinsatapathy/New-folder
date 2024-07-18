#include<stdio.h>
#include <math.h>
int fact(int n){
    int k=1;
    for(int i=0;i<n;i++){
        k*=n;
        n--;
    }
    return k;
}
float function(int k,int n){
float p=pow(n, k);
int o=fact(k);
p=p/o;
return p;
}
int main(){
    int n,k;
    float m=0;
    printf("enter the value of number and number of terms:");
    scanf("%d %d",&n,&k);
    for(int i=1;i<=k;i++){
        if(i%2==0){
            m-=function(i,n);
        }
        else{
            m+=function(i,n);
        }
    }
    printf("%f",m);
}