/*
#############################################################################################################################################################################################################
#
#-----this is a modification of the program to convert a hexadecimal string to a decimal equivalent , am going to go a step further and do automatic sequential hexadecimal strings generation-----
#-------------Pseudocode

    - Define hexadecimal string structure
    -Have an array - decide if F is reached in each array position from indexes 5 to index 2 - increment the value of that index if the value is not reached
    -Convert the hexadecimal digit to a decimal
    - Questions:
        - So how do i transit from 9 to A ,
#
#
*/

#include <stdio.h>

#define LIMIT 6

int _raise_16(int n);
int char_value(char c);
int vhex(char hex[]);
void increment(char hex[]);

int main()
{
    char hex[LIMIT] = {'0', 'x', '0', '0', '0', '0'};

    for (int x = 0; x <= 256; x++)
    {
        printf("Decimal:  %d  Hexadecimal:  %s:  Back to decimal : %d\n", x, hex, vhex(hex));
        increment(hex);
    }
}

void increment(char hex[])
{
    for (int i = 5; i >= 2; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '8')
        {
            hex[i]++;
            break;
        }

        else if (hex[i] == '9')
        {
            hex[i] = 'A';
            break;
        }

        else if (hex[i] >= 'A' && hex[i] <= 'E')
        {
            hex[i]++;
            break;
        }
        else if (hex[i] == 'F')
        {
            hex[i] = '0';
        }
    }
}

int vhex(char hex[])
{
    int hex_value = 0;
    int char_val;

    for (int i = 2; i < LIMIT; i++)
    {
        char_val = char_value(hex[i]);
        hex_value += _raise_16(LIMIT - 1 - i) * char_val;
    }
    return hex_value;
}
int char_value(char c)
{
    int decimal_value;
    if (c >= '0' && c <= '9')
    {
        decimal_value = c - '0';
    }

    if (c >= 'A' && c <= 'F')
    {
        decimal_value = c - 'A' + 10;
    }

    return decimal_value;
}

int _raise_16(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * 16;
    }
    return result;
}