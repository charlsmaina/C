/*
    Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
    variables, both signed and unsigned, by printing appropriate values from standard headers
    and by direct computation. Harder if you compute them: determine the ranges of the various
    floating-point types.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Min size of char: = %d\n", CHAR_MIN); // char is 1 byte
    printf("Max size of char : = %d\n", CHAR_MAX);
}
