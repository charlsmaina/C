/*
in this program , i will be creating a float string to its float equivalent, i will create my own functions
at its foundation is a function called atof()
*/

#include <stdio.h>
#include "../headers/isdig.h"

int main()
{
    char c = 'c';

    if (isdig(c))
    {
        printf("Value : %d\n", c - '0');
    }
    else
        printf("Not a digit:\n");
}