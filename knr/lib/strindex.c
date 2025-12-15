#include "../headers/strindex.h"
#include <stdio.h>
#include <string.h>
int strindex(char s[], char t[])
{
    int i, j, k;
    i = j = 0;

    int len_t;
    i = strlen(s);
    printf("Len:%d\n", i);
    len_t = strlen(t);
    printf("Len pattern:%d\n", len_t);
    for (i = i - 1; i >= 0; i--)
    {
        for (k = i, j = (len_t - 2); s[k] == t[j] && j >= 0; k--, j--)
            ;
        if (j <= 0)
        {
            return k + 1;
        }
    }
    return -1;
}