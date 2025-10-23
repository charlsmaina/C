/*
Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?

################################################################################################################################################################################
#
#---------------------------------------------------------------pseudocode  -----------------------------------------------------------------------------
# - So the question is about replacing tabs with appropriate blanks spaces:
# - So i need to read a line and then parse that line
# - During parsing - when i come across a tab - i will cause a function detab to place the blank spaces instead of placeing the tabs
#
# - n should be a symbolic constant since am replacing fixed tabs stop
###############################################################################################################################################################################
*/

#include <stdio.h>
#define BLANKS 4
#define LIMIT 150

int readline(char line[], int lim);
void detab(void);

int main()
{
    int len, i;
    char line[LIMIT];

    len = 0;
    while ((len = readline(line, LIMIT)) > 0)
    {
        for (i = 0; i < len; i++)
        {
            if (line[i] != '\t')
            {
                putchar(line[i]);
            }

            else if (line[i] == '\t')
            {
                detab();
            }
        }
    }
}

int readline(char line[], int lim)
{
    int i, j, c;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        if (j < lim - 2)
        {
            line[j] = c;
            j++;
        }
    }

    if (c == '\n')
    {
        line[j] = '\n';
        j++;
        i++;
    }
    line[j] = '\0';

    return i;
}

void detab(void)
{
    int i;
    i = 0;
    while (i < BLANKS)
    {
        putchar(' ');
        i++;
    }
}
