
/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.


##############################################################################################################################################################
#
# ----------------------------------------------------code logic ----------------------------------------------------------------------------------------------
# - have an array initialized to zero to hold the number of words having a certain length
# - Read words and return their length and use this lenght to increment the corresponding index
# -Print the histogram:
# -In printing the histogram , i need to know the maximum histogram length so that i can scale the bars accordingly
#
#
#
###############################################################################################################################################################

*/

#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11 // maximum size of array
#define OUT 0
#define IN 1

int main()
{
    int wordlen[MAXWORD];
    int maxvalue;
    int c;
    int state = OUT;
    int len;
    len = 0;

    for (int i = 0; i < MAXWORD; i++)
    {
        wordlen[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                state = OUT;
                ++wordlen[len];
                len = 0;
            }
        }

        else if (state == OUT)
        {
            state = IN;
            len++;
        }

        else if (state == IN)
        {
            len++;
        }
    }

    printf("Word length\t frequency: %c\n", 10);
    for (int i = 0; i < MAXWORD; i++)
    {
        printf("%d\t\t%d\n", i, wordlen[i]);
    }
}