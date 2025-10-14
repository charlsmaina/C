
// using  a for llop to count the characters entered by a user
#include <stdio.h>
int main()
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF; i++)
        ;
    printf("Count:%d\n", i);
}