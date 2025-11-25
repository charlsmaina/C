
// Write a loop equivalent to the for loop above without using && or ||.
// Here is the supposed for loop:
/*
    for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
*/

#include <stdio.h>
int main()
{
    int lim = 100;
    char s[100];
    int i = 0;
    while (i < lim - 1)
    {
        int c;
        if (c = getchar() != '\n')
        {
            if (c != EOF)
            {
                s[i] = c;
                i++;
            }
        }
    }
}
