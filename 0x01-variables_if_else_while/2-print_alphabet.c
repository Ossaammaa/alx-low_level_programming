#include <stdio.h>

int main ()
{
  char c = 'a';
  int i = 0;
  for (; i < 26;)
    {
      putchar (c + i);
      i++ ;
    }
  printf("\n");
  return 0;
}
