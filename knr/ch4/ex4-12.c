
/*
Exercise 4-12. Adapt the ideas of printd to write a recursive version of itoa; that is, convert
an integer into a string by calling a recursive routine.

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void itoa(int num, char string[]);

int main()
{
    char string[10];

    itoa(-1234, string);
    printf("String:%s\n", string);
}
void itoa(int num, char string[])
{
    static int i;

    if (num / 10)
    {
        itoa(num / 10, string);
    }
    else
    {
        i = 0;
        if (num < 0)
        {
            string[i++] = '-';
        }
    }

    string[i++] = abs(num) % 10 + '0';
    string[i] = '\0';
}