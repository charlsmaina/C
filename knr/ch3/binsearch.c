#include <stdio.h>
#define LIMIT 100

int binary_search(int, int digits[], int);
int main()
{
    int digits[LIMIT];
    int found, number;
    number = 51;
    printf("Break 1\n");
    for (int i = 0; i < LIMIT; i++)
    {

        digits[i] = i;
    }
    for (int i = 0; i < LIMIT; i++)
    {
        printf("%3d%c", digits[i], (digits[i] % 10 == 9 || i == 99) ? '\n' : ' ');
    }

    printf("Break 2\n");
    found = binary_search(number, digits, LIMIT);
    printf("Found:%d\n", found);
}
int binary_search(int number, int digits[], int lim)
{

    int low, high, middle;
    low = 0;
    high = lim - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        printf("Middle index: %d\n", middle);
        printf("Middle digit:%d\n", digits[middle]);

        if (number > digits[middle])
        {
            low = middle;
            printf("break 3");
        }
        else if (number < digits[middle])
        {
            high = middle;
        }
        else
            return middle;
    }

    return -1;
}