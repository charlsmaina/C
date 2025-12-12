#include "../headers/ge_tline.h"
#include <stdio.h>

int ge_tline(char line[], int lim)
{
    int len, c;
    for (len = 0; len < lim - 1 && (c = getchar()) != EOF && c != '\n'; len++)
    {
        line[len] = (char)c;
    }
    if (c == '\n')
    {
        line[len] = c;
        len++;
    }
    line[len] = '\0';
    return len;
}