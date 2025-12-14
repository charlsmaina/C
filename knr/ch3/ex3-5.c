/*
Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a
hexadecimal integer in s.
*/

#include "../headers/itob.h"
#include "../headers/ge_tline.h"
#include "../headers/atoi.h"
#include "../headers/itob.h"
#include <stdio.h>
#define LIMIT 7
int main(void)
{
    int base;
    base = 16;
    char s[LIMIT];
    int len, n;
    while ((len = ge_tline(s, LIMIT)) > 0)
    {
        n = atoi(s);
        itob(n, s, base);
    }
}