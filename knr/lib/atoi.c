#include "../headers/atoi.h"
#include <stdio.h>

int atoi(char s[])
{
    int value;
    value = 0;
    int i;
    printf("String:%s", s);
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            value = value * 10 + (s[i] - '0');
        }
        else
        {
            printf("Character string not convertable to an interger:\n");
            break;
        }
    }
    printf("Int value:%d\n", value);
    return value;
}