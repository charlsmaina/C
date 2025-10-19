/*
--------------------------------------------Exercise 1-14.------------------------------------------------------
-------------- Write a program to print a histogram of the frequencies of different characters in its input......................

############################################################################################################################################################
# -------------------------------------code logic -----------------------------------------------
# -So here i have the problem of indentifying each unique character:
# -We have unique character classes like A-Z, 0-9, spaces and all that
# -One way is to have an array of 256 iteams and each time we get a character of certain ascii value we increment the value of that index
# -Each index represents a certain character and the value of that index represents the frequency of occurence of that character
#


*/

#include <stdio.h>
#define ASCII_range 256
#define MAXHIST 15

int printable(unsigned char c);

int main()
{

    int c, i, max_char, len;

    int chars_fr[ASCII_range] = {0}; // seams this works only when you do declaration and defination and initialization simultaneously

    while ((c = getchar()) != EOF)
    {
        ++chars_fr[c];
    }

    max_char = len = 0;
    for (int i = 0; i < ASCII_range; i++)
    {
        if (chars_fr[i] > max_char)
        {
            max_char = chars_fr[i];
        }
    }

    printf("Character:\tFrequency:\tHistogram\n");

    for (i = 0; i < ASCII_range; i++)
    {

        if (chars_fr[i] > 0)
        {
            if (printable((unsigned char)i))
            {
                printf("%c\t\t%d\t\t", i, chars_fr[i]);
            }
            else
                printf("%#X\t\t%d\t\t", i, chars_fr[i]);

            if ((len = chars_fr[i] * MAXHIST / max_char) <= 0)
            {
                len = 1;
            }
        }
        else
            len = 0;

        while (len > 0)
        {
            putchar('*');
            len--;
            if (len == 0)
            {
                printf("\n");
            }
        }
    }
}

int printable(unsigned char c)
{
    return (c >= 32 && c <= 126);
}