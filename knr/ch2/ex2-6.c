/*
Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.

pseudocode:
   1. Isolate the n right most bits of y by maskking all other and shift them into a position where they coincide with bit positions of x to be replaced
   2. Create a msk that wipes out the bit positions in x to be replaced
   3. | x and y
   4. I have modified the question so that i can print the numbers in binary

*/

#include <stdio.h>
#define BYTE 8

int setbits(unsigned int x, int p, int n, unsigned int y);
void dec_bin(int x, int byte[]);
int main()
{
    int byte[BYTE] = {0};

    int x, y;
    x = 75;
    y = 37;

    dec_bin(x, byte);
    dec_bin(y, byte);
    dec_bin(setbits(x, 6, 3, y), byte);

    return 0;
}
int setbits(unsigned int x, int p, int n, unsigned int y)
{
    return x & ~(~(~0 << n) << (p - n + 1)) | (y & ~(~0 << n)) << (p - n + 1);
}

void dec_bin(int x, int byte[])
{
    printf("Decimal: %d\n", x);

    for (int i = (BYTE - 1); i >= 0; i--)
    {
        byte[i] = x % 2;
        x = x / 2;
    }
    printf("Binary:");

    for (int i = 0; i < BYTE; i++)
    {
        printf("%d", byte[i]);
    }
    printf("\n");
}
