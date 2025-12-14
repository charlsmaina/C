#include "../headers/reverse.h"
#include <stdio.h>

void reverse(char s[])
{
    printf("String:%s", s);
    int i, j;
    char temp;
    i = j = 0;
    while (s[j] != '\0')
    {
        j++;
    }
    for (; i < j; i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[i] = temp;
        j--;
    }
    printf("\nReversed string:%s", s);
}