#include<stdio.h>
int power(int n,int k){
int m=1;
for(int i=0;i<k;i++){
    m*=n;
}
return m;
}
int main(){
int n,k,l=0;
scanf("%d %d",&n,&k);
for(int i=1;i<=n;i++){
l+=power(i,k);
}
printf("%d",l);
}