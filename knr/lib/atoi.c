#include "../headers/atoi.h"
#include <stdio.h>

int atoi(char s[])
{
    int value;
    value = 0;
    int i = 0;
    int sign;
    (s[i] == '-') ? sign = -1 : sign = 1; // check why this check for sign does not work

    printf("String:%s", s);
    for (; s[i] != '\0' && s[i] != '\n'; i++)
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