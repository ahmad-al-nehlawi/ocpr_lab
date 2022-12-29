#include <stdio.h>
struct MP3
{
  unsigned int mp3:3;
} ;

void main ()
{
  
struct MP3 a;
  
int b;
  
printf ("enter your number");
  
scanf ("%d", &b);
  
if (b == 1)
    a.mp3=1;
  
if (b == 2)
    a.mp3=2;
  
if (b == 3)
    a.mp3=3;
  
printf ("%u ", a.mp3);
  

}


 
