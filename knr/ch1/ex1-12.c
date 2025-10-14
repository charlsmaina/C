// Write a program that prints its input one word per line.
/*
#######################################################################################################################################################
#  --------------code logic ------------
#   date: 14/10/2025
#
# -The main challenge is excluding multiple word separators and only printing only one new line for more than one tab or space separating words
# -To do this i used a flag named state with possible values of IN or OUT
# -I mark the begining of a word by setting state to IN and printing characters inside a word. Once i get to a word separator like a tab or a space,
#  i print a new line and set state to OUT to bluetick any succesive word separator
#
#
########################################################################################################################################################

*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c;
    int state;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                state = OUT;
                putchar('\n');
            }
        }

        else if (state == OUT) // sorts the begiining of a word
        {
            state = IN;
            putchar(c);
        }

        else if (state == IN) // sorts the inside a word characters
        {
            putchar(c);
        }
    }
}