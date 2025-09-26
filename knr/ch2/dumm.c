#include <stdio.h>
int main()
{
    printf("Hello, \rWorld\be!\n");
    printf("\a");

    //size of int
    printf("Int size: %zu bytes\n", sizeof(int));
    printf("Max size of int: %d\n", __INT_MAX__);
    int x = __INT_MAX__ + 1;
    printf("Overflowed int: %d\n", x);
   
    
    return 0;
}