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
    printf("Min size of char: = %d\n",CHAR_MIN); //char is 1 byte
    printf("Max size of char : = %d\n",CHAR_MAX);

    printf("Min size of short: = %d\n",SHRT_MIN);//short is 2 byte

    printf("Max size of short : = %d\n",SHRT_MAX);

    printf("Min size of int: = %d\n",INT_MIN);//int is 4 byte

    printf("Max size of int : = %d\n",INT_MAX);

     printf("Min size of long: = %ld\n",LONG_MIN);//`long is 8 byte
    printf("Max size of long: = %ld\n",LONG_MAX);

    printf("Max size of unsigned char : = %d\n",UCHAR_MAX);//unsigned char is 1 byte
    printf("Max size of unsigned short : = %d\n",USHRT_MAX);//unsigned short is 2 byte
    printf("Max size of unsigned int : = %u\n",UINT_MAX);//unsigned int
    
    
    
}
   
