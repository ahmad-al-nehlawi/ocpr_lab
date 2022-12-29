#include <stdio.h>
#include <conio.h>
struct rectangle{
int x;
int y;} ;
double perimeter (int x, int y)
{return (x+y)*2;}
double area (int x, int y)
{return x*y;}
int main ( ) {
struct rectangle r;
printf("enter your rectangle width and lenghth \n");
scanf ("%d %d", &r.x,&r.y);
printf("perimeter = %lf \n",perimeter(r.x,r.y));
printf("area = %lf \n",area(r.x,r.y));

}
