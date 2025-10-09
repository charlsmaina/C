#include <stdio.h>
int main()

{
    char name[] = "Hebari yako"; // this is a string

    int hex = 0xF100;
    int octal = 0100;
    long int number;
    number = 9223372037 * 100000000;

    printf("Number:%li\n%0x\n%o\n%s\n", number, hex, octal, name); // format specifiers for different types
    printf("\\c\n");
}