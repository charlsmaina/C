
#include <stdio.h>

int main()
{
    int x = 8;
    int y = 2;
    char name[] = "Charles";

    int *ip;
    ip = &x;
    printf("Pointer pointing to x prints:%d\n", *ip);

    *ip = 10; // updates the new value of x
    printf("New value of x is :%d\n", x);
}