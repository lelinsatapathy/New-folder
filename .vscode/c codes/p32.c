#include<stdio.h>
int main() {
int *iptr, var1, var2;
iptr=&var1;
*iptr=32;
*iptr += 10;
printf("variable var1 contains %d\n",var1);
var2=*iptr;
printf("variable var2 contains %d\n",var2);
iptr=&var2;
*iptr += 20;
printf("variable var2 now contains %d\n",var2);
return 0;
}