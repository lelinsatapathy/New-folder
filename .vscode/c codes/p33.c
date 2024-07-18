#include<stdio.h>
#include<math.h>
int discriminate(int a , int b , int c){
    int y;
    y = b*b - 4*a*c;
    return(y);
}
int main(){
    int d,e,f,root1,root2;
    printf("enter the value of coefficients:");
    scanf("%lf %lf %lf",&d,&e,&f);

    if(discriminate(d,e,f)>0){
        root1 = (-e + sqrt(discriminate(d,e,f))) /( 2*d);
        root2 = (-e - sqrt(discriminate(d,e,f))) / (2*d);
        printf("the roots are %d , %d:",root1,root2);
    }
    else if (discriminate(d,e,f)==0){
        root1 = (-e) / (2*d);
        root2 = (-e) / (2*d);
        printf("the roots are %d , %d:",root1,root2);
        }

        else{
            printf("roots are not real");
        }
    

    return 0;
}