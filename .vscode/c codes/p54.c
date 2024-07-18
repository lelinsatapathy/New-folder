#include<stdio.h>
struct employee
{
    char str name;
    int dateofbirth;
    float salary;
} e1,e2;

int main(){

    printf("enter the name of 1st employee");
    scanf("%c",&e1.name);

    
    printf("enter the dob of 1st employee");
    scanf("%d",&e1.dateofbirth);

    return 0;
}
