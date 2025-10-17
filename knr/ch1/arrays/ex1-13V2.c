/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>
#define IN 1
#define OUT 0

#define MAXRANGE 11

int main()
{
    int c, state, a, i;
    int wordlen;

    int histogram[MAXRANGE];
    for (int a = 0; a < MAXRANGE - 1; a++)
        histogram[a] = 0;
    histogram[MAXRANGE - 1] = 0;

    state = OUT;
    wordlen = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else
            state = IN;

        if (state == IN)
            ++wordlen;
        else if (state == OUT)
        {
            if (wordlen > 0)
            {
                if (wordlen < MAXRANGE - 1)
                    ++histogram[wordlen];
                else
                    ++histogram[MAXRANGE - 1]; // overflow words stored in last index
            }
            wordlen = 0;
        }
    }

    printf("len:\tFrequency:\tHistogram\n");

    for (i = 0; i < MAXRANGE - 1; ++i)
    {
        int freq = 1;

        if (histogram[i] > 0) // if a certain word count has an occurence of 1 or more
        {
            printf("%i\t%d", i, histogram[i]); // print the word count

            while (freq <= histogram[i]) //
            {

                printf("#");
                freq++;
            }
        }

        else
            printf("%i\t%i", i, histogram[i]);
        printf("\n");
    }

    printf("OF:\t");

    if (histogram[MAXRANGE - 1] > 0)
    {
        for (i = 0; i < histogram[MAXRANGE - 1]; i++)
            printf("#");
    }
    else
        printf("0");
    printf("\n");
}
