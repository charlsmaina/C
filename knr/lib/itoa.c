#include "../headers/itoa.h"

#include <stdio.h>
void itoa(int n, char s[])
{
    int i, sign;
    i = 0;
    if ((sign = n) < 0)
        n = -n; // make n positive if it was negative

    do
    {
        s[i++] = n % 10 + '0'; // extract rightmost digit - store it in leftmost index
    } while ((n = n / 10) > 0); // delete rightmost digit
    if (sign < 0)
    {
        s[i++] = '-';
    }
    s[i] = '\0';

    reverse(s);
}