#include <stdio.h>
#include <malloc.h> 
int no1(int x, int y){
int eq=0, min = x-y; if(x==y)
return x;
else if (min > 0)
eq = no1(y, min);
else {min=-min; eq = no1(x,min); }
}
int no2(int x, int y){return x*y/no1(x,y);}
void array(int n, int arr[]){for(int i=0;i<n;i++)arr[i]=i+1;} int main()
{
int x,y,n;
int *arr =(int*)malloc(n * sizeof(int));
array(n,arr);
scanf("%d %d", &x,&y);
printf("%d \n",no1(x,y));
printf("%d\n",no2(x,y)); scanf("%d", &n);
for(int i=0;i<n;i++) printf("%d ",arr[i]); return 0;
}