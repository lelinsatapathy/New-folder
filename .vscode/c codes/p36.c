#include<stdio.h>
void what (int *p){
    *p = 10; p = p+1;
}
int main(){
    int A[5] = {4,8,12,16,20}, *p;
    p = A;
    what(p);
    printf("%d", *p);
}