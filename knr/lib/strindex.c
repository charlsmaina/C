#include "../headers/strindex.h"
#include <stdio.h>
int strindex(char s[], char t[])
{
    int i, j, k;
    i = j = 0;

    int len_t;
    while (s[i++] != '\0')
        ;
    i--;

    while (t[j++] != '\0')
        ;
    j--;
    len_t = j;
    for (; i >= 0; i--)
    {
        for (k = i, j = len_t; s[k] == t[j] && j >= 0; k--, j--)
            ;
        if (j == 0)
        {
            return i;
        }
    }
    return -1;
}