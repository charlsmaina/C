/*
This piece of code counts the number of 1-bits in a interger
- The logic is that
  - make a counter and always check x is non zero - then right shift and each time you OR x with 1 - if its true increase i - which is our counter variable
  - in addition to that i will bring another function dec_bin that converts x to binary
*/

#include <stdio.h>
#define BYTE 8

int bit_count(int x);
void dec_bin(int y, int byte[]);

int main()
{
    int byte[BYTE] = {0};
    int x;
    x = 123;
    dec_bin(x, byte);

    printf("Number of one bits in x :%d \n", bit_count(x));
}

int bit_count(int x)
{
    int i;
    for (i = 0; x != 0; x >>= 1)
    {
        if (x & 01)
        {
            i++;
        }
    }
    return i;
}
void dec_bin(int y, int byte[])
{

    printf("Decimal %d\n", y);

    for (int i = BYTE - 1; i >= 0; i--)
    {
        byte[i] = y % 2;
        y /= 2;
    }

    for (int a = 0; a <= BYTE - 1; a++)
    {

        printf("%d", byte[a]);
    }
    printf("\n");
}