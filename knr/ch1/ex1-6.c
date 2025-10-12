// A program to verify that EOF returns either 1 or 0

#include <stdio.h>
int main()
{
    int c;
    while (c = getchar() != EOF)

        printf("%i\n", c);

    printf("%d\n", c);
    // print A to Z without using number
}