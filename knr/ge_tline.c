#include <stdio.h>
#define LIMIT 15
int ge_tline(char line[LIMIT], int lim);

int ge_line(char line[], int lim)
{
    int len, c;
    for (len = 0; len < LIMIT - 1 && (c = getchar()) != EOF && c != '\n'; len++)
    {
        line[len] = c;
    }
    if (c == '\n')
    {
        line[len] = c;
        len++;
    }
    line[len] = '\0';
    return len;
}