#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#define LIVE 'X'
#define DEAD ' '
 
void print(char *array, int h, int w);
int next(char *array, int h, int w);
 
int main(int argc, char *argv[])
{
  int h;
  int w;
  int i, j;
  int number, posh, posw;
 
  if (argc == 3 && atoi(argv[1]) && atoi(argv[2])) {
    h = atoi(argv[1]);
    w = atoi(argv[2]);
  }
  else if (argc == 1) {
    h = 10;
    w = 10;
  }
  else
    return 1;
 
  srand( time(NULL));
  char array[h][w];
    
  for (i=0; i<h; ++i)
    for (j=0; j<w; ++j)
      array[i][j] = DEAD;
 
  number = (h * w) / 10;
  ((h * w) % 10) > 5? ++number: number;
  while (number) {
    posh = rand()%(h+1);
    posw = rand()%(w+1);
    if ( array[posh][posw] == DEAD) {
      array[posh][posw] = LIVE;
      --number;
    }
  }
  i = 1;  
  while (i) {
    system("clear");
    print(&array[0][0], h, w);
    usleep(400000);
    i = next(&array[0][0], h, w);
  }
 
  return 0;
}
 
void print(char *array, int h, int w)
{
  char *ptr = array;
  int i, j;
  for (i=0; i<h; ++i) {
    for (j=0; j<w; ++j)
      printf("%c", *(ptr+i*w+j));
    putchar('\n');
  } 
}
 
int next(char *array, int h, int w)
{
  char array1[h][w];
  char array2[h][w];
  int counter;
  int i, j;
  int altered = 0;
// copy array
  for (i=0; i<h; ++i)
    for (j=0; j<w; ++j)
      array1[i][j] = *(array + i*w +j);
// build altered array
  for (i=0; i<h; ++i) {
    for (j=0; j<w; ++j) {
      counter = 0;
      array2[i][j] = array1[i][j];
      if (array1[(i-1+h)%h][(j-1+w)%w] == LIVE && i>0 && j>1) 
        ++counter;
      if (array1[(i-1+h)%h][j] == LIVE && i>0)
        ++counter;
      if (array1[(i-1+h)%h][(j+1+w)%w] == LIVE && i>0 && j<(w-1))
        ++counter;
      if (array1[i][(j-1+w)%w] == LIVE && j>1)
        ++counter;
      if (array1[i][(j+1+w)%w] == LIVE && j<(w-1))
        ++counter;
      if (array1[(i+1+h)%h][(j-1+w)%w] == LIVE && i<(h-1) && j>1)
        ++counter;
      if (array1[(i+1+h)%h][j] == LIVE && i<(h-1))
        ++counter;
      if (array1[(i+1+h)%h][(j+1+w)%w] == LIVE && i<(h-1) && j<(w-1))
        ++counter;
      if (array1[i][j] == DEAD && counter == 3) {
        array2[i][j] = LIVE;
        ++altered;
      }
      if (array1[i][j] == LIVE && counter!=2 && counter!=3) {
        array2[i][j] = DEAD;
        ++altered;
      }
    }
  }
// copy array
  for (i=0; i<h; ++i)
    for (j=0; j<w; ++j)
      *(array + i*w +j) = array2[i][j];
 
  return altered;
}