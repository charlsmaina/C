// using a for loop to count characters: no of digits in a text, no of white spaces, and other characters
/*
###############################################################################################################################################################
#
# ----------------------------------------code logic ---------------------------------------------------
# - Any digit in text is internally represented in ascii
# -It is possible to compare ascii values directly





*/

#include <stdio.h>
int main()
{
    long int wc;

    for (wc = 0; getchar() != EOF; ++wc)
        ;
    if ('1' < '9')
    {
        printf("%ld\n", wc);
    }
}