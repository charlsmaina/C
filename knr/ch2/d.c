#include <stdio.h>
int main()
{
    char pattern[] = "Hello";
    printf("%s\n", pattern);

    //----------------------//
    char c = 'c';
    printf("This is letter %c\n", c);                    // prints c as a character constnt
    printf("%c is represented internlly as %d\n", c, c); // prints c both as a character and the nteger value it represents
    return 0;
}