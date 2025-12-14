#include "../headers/reverse.h"
#include <stdio.h>

void reverse(char s[])
{
    printf("Unreversed string:%s\n", s);
    int i, j;
    char temp;
    i = j = 0;
    while (s[j] != '\0')
    {
        j++;
    }
    j--; // to leave '/0' intact
    for (; i < j; i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
    printf("Reversed string:%s\n", s);
}