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

    printf("\nMin size of char = %d\n", CHAR_MIN); // char is 1 byte
    printf("Max size of char = %d\n", CHAR_MAX);   // So this machine uses signed char { -128 to 127} by default
    printf("Signed char min = %d\n", SCHAR_MIN);
    printf("Signed char max = %d\n", SCHAR_MAX);
    printf("Size of unsingned char = %d\n ", UCHAR_MAX);

    printf("\nMin size of Int = %d\n", INT_MIN);
    printf("Max size of Int = %d\n", INT_MAX);            // in my machine int is 32 bits : it is signed int by
    printf("Max size of unsigned int = %ld\n", UINT_MAX); // The question is why is it that int cannot hold its max size - or is -1 its max value: same with ULONG max
    // How does the wrapping and overflow happen

    printf("\nMin size of long int = %ld\n", LONG_MAX); // in this machine long is 64 bits
    printf("Min size of long = %ld\n", LONG_MIN);
    printf("Max size of unsigned long = %ld\n", ULONG_MAX);

    printf("\nMax size of short = %d\n", SHRT_MAX); // in this machine short is 16 bits
    printf("Min size of short = %d\n", SHRT_MIN);

    printf("Max size of unsigned short = %d\n", USHRT_MAX);
}
