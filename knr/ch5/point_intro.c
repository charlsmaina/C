
#include <stdio.h>

void swap(int *pc, int *pd);

int main()
{
    int x = 8;
    int y = 2;
    char name[] = "Charles";

    int *ip; // pointer declaration
    ip = &x; // use of indirection and dereferncing + address assignment operators
    printf("Pointer pointing to x prints:%d\n", *ip);

    *ip = 10; // updates the new value of x// updating the pointer updates the value of the variable it points to
    printf("New value of x is :%d\n", x);

    y = *ip; // assigns value of x to y
    printf("New value of y is :%d\n", y);

    char *ip2; // pointer type must match the type of data it stores
    ip2 = &name[0];
    printf("Pointer pointing to name prints:%d\n", *ip2);

    // swap c and d
    int c = 34;
    int d = 43;
    printf("C:%d\nD:%d\n", c, d);
    swap(&c, &d);
    printf("Swapped values of c and d\nC:%d\nD:%d\n", c, d);
    return 0;
}
void swap(int *pc, int *pd)
{
    int temp;
    temp = *pc; // stores the value that pointer pc is pointing to
    *pc = *pd;  // changes the value that pointer pc is pointing to to the value pointer pd is pointing to
    *pd = temp; // updates the value that pointer pd is pointing to temp;
}