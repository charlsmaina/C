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
int main()
{
    int chars_fr[256];
    int c, i;

    while ((c == getchar()) != EOF)
    {
        ++chars_fr[c];
    }

    printf("Character:\tFrequency:");

    for (i = 0; i < 256; i++)
    {
        if (chars_fr[i] > 0)
        {
            printf("%c\t%d\n", i, chars_fr[i]);
        }
    }
}