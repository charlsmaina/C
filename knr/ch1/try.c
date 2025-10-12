#include <stdio.h>
int main()

{
    char name[] = "Hebari yako"; // this is a string

    int hex = 0xF100;
    int octal = 0100;
    long int number;
    number = 9223372037 * 100000000;
    printf("%i\n", '\n');

    printf("Number:%li\n%0x\n%o\n%s", number, hex, octal, name); // format specifiers for different types

    printf("%c", 012); // new line is ascii number 10, so you can print it by printing its ascii value as a character
    printf("\012");    // prints a new line : this is octal - you can specify the special character using octal
}