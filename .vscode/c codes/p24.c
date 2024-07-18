#include<stdio.h>
#include<string.h>

int main(){
    char s1[8];
    gets(s1);
    char s2[]="ravi";
    strcat(s1,s2);
    strlen(s2);
    printf("the length of s2 is:%d\n",strlen(s2));
    printf("the combined string is:%s\n",strcat(s1,s2));
    return 0;
}