#include <stdio.h>
#include <strings.h>
/* Array names as parameters are pointers : they are variables containing addresses*/

int main()
{
    char name[] = "CHARLES";
    char *cp = name;

    for (int i = 0; *cp != '\0'; cp++)
    {
        printf("%c", *cp);
        }
    putchar('\n');
}