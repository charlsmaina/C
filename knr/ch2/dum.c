

#include <stdio.h>
#include <string.h>

int z;

int main()
{
    char x = 'x';
    int y;
    printf("%d\n", y); // uninitialized automatic variables hold dummy values

    printf("%d\n", x); // a character onstant can be interpreted as both a character and an interger

    printf("%c\n", x);

    printf("%d\n", z); // uninitialized global/external variables hold a value of zero

    const char msg[7] = "warning";
    printf("%s\n", msg);

    int c = 'R';
    if (c >= 'A' && c <= 'Z') // converts a higher case letter to lower case.
    {
        char lower = (c + 'a' - 'A');

        printf("%c\n", lower);
    }

    else
        printf("%c\n", c);

    printf("%d\n", 'a');
    printf("%d\n", 'A');
    printf("%d\n", 'b' - 'B');

    return 0;
}
