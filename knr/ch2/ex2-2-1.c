/*
    Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
    variables, both signed and unsigned, by printing appropriate values from standard headers
    and by direct computation. Harder if you compute them: determine the ranges of the various
    floating-point types.
--------------------------
                         This is a second version of the same : this time using bit shifting
                                                                                        -------------------------------------



*/

#include <stdio.h>

int main()
{
    printf("min size of signed char = %d\n", -(char)((unsigned char)~0 >> 1));
    - // when i cast to char is it signed or unsigned?
        printf("Max size of signed char = %d\n", (char)((unsigned char)~0 >> 1));
}