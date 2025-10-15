/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

----------------------Vertical orientation version----------------------

*/

#include <stdio.h>

#define MAXHIST 15 // max length of histogram
#define MAXWORD 11 // maximum size of array{max length of a word}
#define OUT 0
#define IN 1

int main()
{
    int wordlen[MAXWORD]; // stores word length in index and frequency in the value
    int maxvalue;         // maximum value of wordlen[]. I length with highest frequency

    int len_hist, overflow, state, c, len;

    state = OUT;
    len = overflow = 0;

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

                if (len > 0)
                {
                    if (len < MAXWORD)
                    {
                        ++wordlen[len];
                    }
                    else
                        ++overflow;
                }
            }
            len = 0;
        }

        else if (state == OUT)
        {
            state = IN;
            len = 1;
        }

        else if (state == IN)
        {
            len++;
        }
    }

    // histogram printing:

    maxvalue = 0;
    for (int i = 1; i < MAXWORD; i++)
    {
        if (wordlen[i] > maxvalue)
        {
            maxvalue = wordlen[i]; // i want to find the highest frequency so that i can scale the histogram based on this
        }
    }
}
