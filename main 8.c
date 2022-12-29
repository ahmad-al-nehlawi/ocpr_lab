#include <stdio.h>
#include <string.h>
int main()
{

char string1[20], string2[20],string3[20];
int i=0,j=0,result;
char *str1,*str2,*str3;
str1=string1;
str2=string2;
str3=string3;
printf("Enter the first string : \n");
scanf("%s",string1);
printf("\nEnter the second string : \n");
scanf("%s", string2);
strcpy(str3, str1);
while(string1[i]!= '\0') { ++str1; i++; }
while(string2[j]!='\0') { *str1=*str2; str1++; str2++; j++; }
printf("The concatenated string is : \n %s\n",string1);
result = strcmp(str1, str2);
printf("strcmp(str1, str2) = %d\n", result);
printf("The copyed string is : \n %s \n", string3);
printf("Length of string string 3 = %zu \n", strlen(string3));
printf("last char in the string 3 is : %c \n",string3[strlen(string3)-1]);
return 0;}