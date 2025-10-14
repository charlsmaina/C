// characters count: no of digits in a text, no of white spaces, and other characters
/*
###############################################################################################################################################################
#
# ----------------------------------------code logic ---------------------------------------------------
# - Any digit in text is internally represented in ascii
# -It is possible to compare ascii values directly
# - To detect a digit i use the rg c >= '0' && c <= '9' and to find the numerical value , '0' is minused from c
# - Everything else is straight forward
#
#
###############################################################################################################################################################





*/

#include <stdio.h>
int main()
{
    int c, wspace, others;
    wspace = others = 0;

    int digits[10];
    for (int i = 0; i < 10; i++)
    {
        digits[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++digits[c - '0'];
        }
        else if (c == '\t' || c == '\n' || c == ' ')
        {
            ++wspace;
        }
        else
            ++others;
    }
    printf("Digits:\tTally%c", 10); // prints Digits plus a new line:
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%d\n", i, digits[i]);
    }
    printf("White space:%d\nOthers:%d\n", wspace, others);

    return 0;
}