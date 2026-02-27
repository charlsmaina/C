#include "../headers/strindex.h"
#include <stdio.h>
#include <string.h>
#include "../headers/ge_tline.h"
int strindex(char s[], char t[], int size_t)
{
    printf("Enter pattern to check:\n\n");
    int len = 0;

    while ((len = ge_tline(t, size_t)) > 0)
    {
        int i, j, k;
        int len_t;
        i = strlen(s);     // length of line
        len_t = strlen(t); // length of pattern

        printf("Len line:%d\n", i);
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
    }

    return -1;
}