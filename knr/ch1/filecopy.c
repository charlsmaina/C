
// A program to copy input to output
#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }

  printf("%i\n", EOF);

  return 0;
}