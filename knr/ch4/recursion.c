
#include <stdio.h>
int main()
{
    int num = 12345;
    for (int i = 0; i < 5; i++)
    {
        putchar(num % 10 + '0');

        num = num / 10;
    }
    putchar('\n');
}