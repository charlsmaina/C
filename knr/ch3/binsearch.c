#include <stdio.h>

int binary_search(int digits[]);
int main()
{
    int digits[100];
    for (int i = 0; i < 100; i++)
    {
        digits[i] = i;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%6d%c", digits[i], (digits[i] % 10 == 9 || i == 99) ? '\n' : ' ');
    }
}