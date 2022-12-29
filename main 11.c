#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct dimentions
{int a1, a2,a3,a4, b1, b2, b3, b4;};

float A(struct dimentions XY){
float x, y;
x = abs(XY.a1 - XY.a2);

 y = sqrt(abs(XY.b2 - XY.b3) * abs(XY.b2 - XY.b3) + (abs (XY.a2 - XY.a3) * abs(XY.a2 - XY.a3)));
 return (x + y)*2;}

int B(struct dimentions XY){
return (XY.b1 - XY.b4) * (XY.a2 - XY.a1);}
int main(){
struct dimentions PC;
printf("fill your points in the XY lines\n");
scanf("%d %d" &XY.a1, &XY.b1);
scanf("%d %d" &XY.a2, &XY.b2);
scanf("%d %d", &XY.a3, &XY.b3);
scanf("%d %d", &XY.a4, &XY.b4);
int z = A(XY);
int r = B(XY); 
printf("%d\n", z);
printf("%d\n", r);
return 0;}