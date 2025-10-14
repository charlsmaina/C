// using a for loop to count characters: no of digits in a text, no of white spaces, and other characters
/*
###############################################################################################################################################################
#
# ----------------------------------------code logic ---------------------------------------------------
# - Any digit in text is internally represented in ascii
# -It is possible to compare ascii values





*/

#include <stdio.h>
int main()
{
    long int wc;

    for (wc = 0; getchar() != EOF; ++wc)
        ;
    printf("%ld\n", wc);
    printf("%i", 10); // prints a new line which is represented by ascii value 10
}