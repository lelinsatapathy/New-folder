#include<stdio.h>
int main(){
    int n,i,j,k,l,m,p;
    printf("enter the number of rows:");
    scanf("%d",&n);

    for(i=1;i<=(n/2)+1;i++){
        for(j=1;j<=((n/2)+1)-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(l=1;l<=n-((n/2)+1);l++){
        for(m=1;m<=l;m++){
            printf(" ");
        }
        for(p=0;p<n-(2*l);p++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}