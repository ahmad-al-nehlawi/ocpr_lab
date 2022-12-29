#include <stdio.h>

 int
main () 
{
  
int a;
  
printf ("1) Hex (16) => ");
  
scanf ("%x", &a);
  
printf ("2) Oct(8) => %o\n", a, a);
  
printf ("3) Hex (16) => %x; Hex (16)<<2 => %x; Hex (16) >>2 => %x\n", a,
	   a << 2, a >> 2);
  
printf ("4) ~Hex (16) => %x \n", ~a);
  
printf ("5) %x^%x => %x; %x^%x => %x; %x^%x => %x\n", a, a, a ^ a, a,
	   a << 2, a ^ (a << a), a, a >> 2, a ^ (a >> 2));
  
 
return 0;

}


