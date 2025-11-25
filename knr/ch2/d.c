#include <stdio.h>
int main()
{
    char pattern[] = "Hello";
    printf("%s\n", pattern);

    //----------------------//
    char c = 'c';
    printf("This is letter %c\n", c);                    // prints c as a character constnt
    printf("%c is represented internlly as %d\n", c, c); // prints c both as a character and the nteger value it represents

    //----when char is converted to an nteger can it ever produce a negative number---lets find out//
    int z = 100;
    printf("%c\n", z);
    // It seams like there are some unprintable characters tht re represented by question mark like symbol.
    return 0;
}