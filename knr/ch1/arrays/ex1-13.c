/*###
###########################################################################################################################################3
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
// This program just counts the number of chracters that a word has:for complete version of the solution check V2 of ex-13.c

---------------------code reedit logic---------------------------------
 - The problem am facing is that i am not able to distiguish between consequtive word separators
 -What i did is used a state flag to inform me on the beginning of a word, inside of a word and also when i get outside of it
 -Once outside a word, i print the character count and reset it to zero to start counting the next word
*/

#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int c, charc, state;
    charc = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n') // ending of a word
        {
            if (state == IN)
            {
                state = OUT;
                printf(": %d\n", charc);
                charc = 0;
            }
        }

        else if (state == OUT) // beginning of a word
        {
            state = IN;
            putchar(c);
            ++charc;
        }

        else if (state == IN) // inside a word
        {
            putchar(c);
            ++charc;
        }
    }

    return 0;
}
