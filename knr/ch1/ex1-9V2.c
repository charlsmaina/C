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
        if (c != ' ')
        {
            putchar(c);
        }

        else if (c == ' ')
        {
            if (prevc != ' ')
                putchar(c);
        }

        prevc = c;
    }
}

/*
This version seams more elegant:
What is happening here:
    * A integer variable to store previous character is introduced. INT is used to accomodate EOF which
      char may not adequately represent in all machines
    * In a while loop , we check if current character is not a blank and print it if true
    *Later we check if previous character was not a blank and if true we put the blank
    *Then we store the current character in previous character variable
    *
    *
    * THAts real defination of conciseness and succint code that is easy to follow

*/