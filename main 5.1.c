
#include <stdio.h>



int
main ()
{

  int array[1000], n;
  scanf ("%d", &n);

  for (int i = 0; i < n; i++)
    scanf ("%d", &array[i]);

  for (int i = 0; i < n; i++)
    printf ("%d ", array[i]);
}
