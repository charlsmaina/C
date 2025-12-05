/*
This piece of code counts the number of 1-bits in a interger
- The logic is that
  - make a counter and always check x is non zero - then right shift and each time you OR x with 1 - if its true increase i - which is our counter variable
  - in addition to that i will bring another function dec_bin that converts x to binary
*/

#include <stdio.h>
#define INTERGER_SIZE 32

int bit_count(int signed x);
void dec_bin(int signed y, int byte[]);

int main()
{
    int byte[INTERGER_SIZE] = {0};
    int x;
    x = 2147483648;
    dec_bin(x, byte);

    printf("Number of one bits in x :%d \n", bit_count(x));
}

int bit_count(int signed x)
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
void dec_bin(int signed y, int byte[])
{

    printf("Decimal %d\n", y);

    for (int i = INTERGER_SIZE - 1; i >= 0; i--)
    {
        byte[i] = y % 2;
        y /= 2;
    }

    for (int a = 0; a <= INTERGER_SIZE - 1; a++)
    {

        printf("%d", byte[a]);
    }
    printf("\n");
}