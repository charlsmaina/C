/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

//This program just counts the number of chracters that a word has:for complete version of the solution check V2 of ex-13.c


#include <stdio.h>
#define IN 1
#define OUT 0
int main ()
{
    int c,charc,state;
    charc = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else
            state = IN;

        if (state == IN)
        {
            putchar(c);
            ++charc;
        }
        else
        {
            printf(": %d\n",charc);
            charc = 0;
        }
        
    }
    
}