#include <stdio.h>

int main ()
{
  char c = 'a';
  char C = 'A';
  int i = 0;
  for (; i < 26;)
    {
      putchar (c + i);
      i++ ;
    }
  i = 0 ;
  for (; i < 26;)
    {
      putchar (C + i);
      i++ ;
    }
  printf("\n");
  return 0;
}
