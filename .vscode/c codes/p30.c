#include<stdio.h>
int main(){
    char str1[20],str2[20],str3[30];
    printf("enter the value of string 1:");
    gets(str1);

    printf("enter the value of string 2:");
    gets(str2);

    int i,j;
    for(i=0;str1[i]!='\0';i++){
        str3[i]=str1[i];
        str3[i]=' ';
    
    
    for(j=0;str2[j]!='\0';j++){
        str3[i+j+1]=str2[j];
        
    }}
    str3[i+j+1] ='\0';
    printf("the value of string is:%s",str3);
    return 0;
}