/*
Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.
#############################################################################################################################################
#
#-----------------------------pseudocode-------------------------------------------------
#   - Rigthmost occurence means i need to have a mechanism to ignore left occurences - array trnasversal is mainly from left to right
#   - The other option - transverse from right to left
#   - Thats what seams obvious to me
#   - I need a function strindex(s,t)
#   -And it worked!!
*/
#include "../headers/strindex.h"
#include "../headers/ge_tline.h"
#include <stdio.h>
#define LIMIT 100
#define PATERN_LEN 10
int main(void)
{
    char line[LIMIT];
    char pattern[PATERN_LEN];
    printf("Enter lines to scan for a certain pattern:\n");
    while (ge_tline(line, LIMIT) > 0)
    {
        printf("Enter the pattern to find:\n");
        if (ge_tline(pattern, PATERN_LEN) > 0)
        {
            printf("Pattern occurs in rightmost position at index:%d\n", strindex(line, pattern));
        }
    }
    return 0;
}