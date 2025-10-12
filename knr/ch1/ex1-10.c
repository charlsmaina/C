/*Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way. */

#include <stdio.h>
int main()
{
        int c;
        while ((c = getchar()) != EOF)
        {
                if (c == '\t')
                        printf("\\t");
                if (c == ' ')
                        printf("\\b");
                if (c == '\\')
                        printf("\\\\");
                if (c != '\t' && c != ' ' && c != '\\')
                {
                        putchar(c);
                }
        }

        return 0;
}
/*
  in a series of if's , the else is always associated with the previous if
  But in an else if series , the else is associated with the whole body of if,else if
  In this program using else if instead of if makes a difference
  To use if only:
   you will have to check if the previous characters are not either tab,blank or backslash.
*/