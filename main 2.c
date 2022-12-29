#include <stdio.h>
#include <math.h>
#define PI 3.142857
int
main () 
{
  
double a, z1, z2;
  
scanf ("%f", &a);
  
z1 =
    2.0 * sin (3 * PI - 2 * a) * sin (3 * PI - 2 * a) * cos (5 * PI +
							     2 * a) * cos (5 *
									   PI
									   +
									   2 *
									   a);
  
z2 = (1.0 / 4.0) - (1.0 / 4.0) * sin ((5.0 / 2.0) * PI - 8 * a);
  
printf ("z1 = %f \n z2=  %f", z1, z2);
  
return 0;

}


