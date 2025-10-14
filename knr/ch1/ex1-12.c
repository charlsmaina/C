// Write a program that prints its input one word per line.

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

        else if (state == OUT) // begiining of a word
        {
            state = IN;
            putchar(c);
        }

        else if (state == IN) // inside a word
        {
            putchar(c);
        }
    }
}