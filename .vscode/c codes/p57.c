#include<stdio.h>
int main(){
    int rows,i,j,k,l,m;

    printf("enter the number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        if(i % 2==0){
            for(j=1;j<=i/2;j++){
                printf("#");

                for(k=1;k<=i/2;k++)
                    printf("*");
                
            }
        }
        else if (i % 2 !=0){
            for(l=1;l<=(i/2)+1;l++){
                printf("*");


                while(m > i-((i/2)+1)){
                    break;
                    m++;
                }
                printf("#");

            }
        } printf("\n");
        
    }
    return 0;
}