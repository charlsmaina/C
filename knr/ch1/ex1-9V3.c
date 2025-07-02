/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/

#include <stdio.h>
#define NONBLANK 'a'

int main ()
{
int c,prevc;
prevc = NONBLANK;

while ((c = getchar()) != EOF)
{
  if (c != ' ' || prevc != ' ')
  
  putchar(c);
  prevc = c ;
}

}