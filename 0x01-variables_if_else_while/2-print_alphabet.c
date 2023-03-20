#include <stdio.h>

int main ()
{
  char c = 'a';
  for (int i = 0; i < 26; i++)
    {
      putchar (c + i);
    }
  printf("\n");
  return 0;
}
