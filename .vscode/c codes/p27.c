#include<stdio.h>
int main(){
    char str[30];

    int len;
    printf("enter the string:");
    gets(str);

    for(len=0;str[len]!='\0';len++);
    printf("the length of string is:%d",len);
    return 0;
}