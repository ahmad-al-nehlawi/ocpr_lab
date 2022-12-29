#include <stdio.h>
int main() {
const char* names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"
"Friday", "Saturday", NULL};
char buffer [16];
scanf("%15s", buffer);
for(int i=0; names[i] != NULL; i++){
if(strcmp(buffer, names[i]) == 0) {
printf("Day number %d\n", i+1);
return;
}
}
printf("Sorry, that's not a valid day");
}