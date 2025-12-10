#include <stdio.h>
#define LIMIT 100

int binary_search(int, int digits[], int);
int main()
{
    int digits[LIMIT];
    int found, number;
    number = 180;

    for (int i = 0; i < LIMIT; i++)
    {

        digits[i] = i;
    }
    for (int i = 0; i < LIMIT; i++)
    {
        printf("%3d%c", digits[i], (digits[i] % 10 == 9 || i == 99) ? '\n' : ' ');
    }

    (found = binary_search(number, digits, LIMIT)) != -1 ? printf("%d found at index %d\n", number, found) : printf("Not found\n");
    return 0;
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
            /* move low past middle to avoid infinite loop */
            low = middle + 1;
        }
        else if (number < digits[middle])
        {
            /* move high before middle to avoid infinite loop */
            high = middle - 1;
        }
        else
            return middle;
    }

    return -1;
}