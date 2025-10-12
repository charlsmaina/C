/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/

#include <stdio.h>
#define NONBLANK EOF

int main()
{
  int c, prevc;
  prevc = NONBLANK;

  while ((c = getchar()) != EOF)
  {
    if (c != ' ' || prevc != ' ')

      putchar(c);
    prevc = c;
  }
}

/*
 Here is another succint code;
 Here the main concept id the operation of the || {OR operation}. In an OR operation..the
 statements below it are executed as long as one of the conditions on either side is true
 - So here we check whether c is not equal to blank and if true putchar(executes). If the first condition is true,
 the second condition which checks for previous character is not even evaluated

 * Once we get a blank, the first condition becomes false and only now is the second condition evaluated. If true, putchar executes
*/