#include<stdio.h>
#include<math.h>
int factorial(int m){
    if(m==0){
        return (1);
    }
    else if(m!=0){
        return (m*factorial(m-1));
    }
}

float function(int n,int k){
    int i,j,p;
    float l=0;
    float a=0;
    float b=0;
    while(k!=1){
        for(i=1;i<=k/2;i++){
            l=pow(n,(2*(2*i)-2));
            l-=l/factorial(2*(2*i)-2);
        }
        return l;

        if(k%2!=0){
            for(j=0;j<((k/2)+1);j++){
                a=pow(n,4*j);
                a+=a/factorial(4*j);
            }
            return a;

        }
        else if(k%2==0){
            for(p=0;p<(k/2);p++){
                b=pow(n,4*p);
                b+=b/factorial(4*p);
            }
            return b;
        }

        if(k%2!=0){
            return (l+a);
        }
        else if(k%2==0){
            return (l+b);
        }
    }

    if(k==1){
        return (n);
    }


}

int main(){
    int n,k;

    printf("enter the number :");
    scanf("%d",&n);
    printf("enter the no of terms:");
    scanf("%d",&k);

    function(n,k);

    printf("the value %d when no of terms %d is %d:",n,k,function(n,k));
    return 0;
}