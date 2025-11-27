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
#
#
#
#
#
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
    increment(hex);
}

void increment(char hex[])
{
    for (int i = 5; i >= 2; i--)
    {

        int j;
        for (j = 0; j <= 9; j++)
        {

            printf("Hexadecimal: %s\n", hex);

            hex[i]++;
        }
        while (j > 9 && j <= 15)
        {
            if (j == 10)
            {
                hex[i] = 'A';
                printf("Hexadecimal: %s\n", hex);
                j++;
            }
            else
            {

                hex[i]++;
                printf("Hexadecimal: %s\n", hex);
                j++;
            }
        }
        hex[i] = '0';
    }
}