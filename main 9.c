#include <stdio.h>
int main()
{
//1

char inputString[100];
int n,upperCount, lowerCount, specialCount, digitCount, i;
scanf("%d", &n);
for(int i=0;i<n;i++)
scanf("%c", &inputString[i]);
upperCount = lowerCount = specialCount = digitCount = 0;
for (i = 0; inputString[i] != '\0'; i++)
if (inputString[i] >= 'A' && inputString[i] <= 'Z')
{upperCount++; }else if (inputString[i] >= 'a' && inputString[i] <= 'z') {lowerCount++; }else if (inputString[i] >= '0' && inputString[i] <= '9') {digitCount++;}else{specialCount++; }
printf("\nUpper case count : %d\n", upperCount);
printf("Lower case count: %d\n", lowerCount);
printf("Digit count : %d\n", digitCount);
printf("Special character count : %d\n", specialCount);
return 0;}