/*Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>
#define MAXSIZE 10
#define IN 1
#define OUT 0

int main()
{
    int c, overflow, i, state, charcount, a;
    int hist[MAXSIZE];
    overflow = 0;

    for (int i = 0; i < MAXSIZE; i++)
        hist[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else
            state = IN;

        if (state == IN)
            ++charcount;
        else if (state == OUT)

        {
            if (charcount < MAXSIZE)
                ++hist[charcount];
            else
                ++overflow;

            charcount = 0;
        }
    }
    printf("Char count\t Frequency\n ");
    for (i = 0; i < MAXSIZE; i++)
    {
        printf("%d\t\t", i);

        if (hist[i] > 0)
        {
            for (a = 1; a <= hist[i]; ++a)
            {
                printf("#");
            }
        }
        printf("\n");
    }

    printf("Overflow:%d\n", overflow);
}