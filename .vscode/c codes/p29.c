#include<stdio.h>
//Comparing two strings 
int main()
{
char str1[80], str2[80];
int i=0;
printf("Enter string1: ");
gets(str1);
printf("Enter string2: ");
gets(str2);
while(str1[i]==str2[i] && str1[i]!= '\0'&& str2[i]!= '\0')
i++;
if(str1[i]=='\0' && str2[i]=='\0')
printf("\n\nThe strings are EQUAL.\n");
else
printf("\n\nThe strings are NOT EQUAL.\n");
return 0;}
