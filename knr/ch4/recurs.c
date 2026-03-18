#include <stdio.h>
void printd(int num);

int main()
{
    printd(1235);
    putchar('\n');
}

void printd(int num)
{
    if (num / 10)
    {
        printd(num / 10);
    }
    putchar(num % 10 + '0');
}