/*
Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.
#############################################################################################################################################
#
#-----------------------------pseudocode-------------------------------------------------
#   - Rigthmost occurence means i need to have a mechanism to ignore left occurences - array trasversal  is mainly from left to right
#   - The other option - transverse from right to left
#   - Thats what seams obvious to me
#   - I need a function strindex(s,t)
#   -And it worked!!
*/

#include "../headers/ge_tline.h"

int string_index(char line[], char pattern[]);

#include <stdio.h>
#define LIMIT 100
#define PATERN_LEN 10
int main(void)
{
    char line[LIMIT];
    char pattern[PATERN_LEN];

    while (ge_tline(line, LIMIT) > 0)
    {

        if (ge_tline(pattern, PATERN_LEN) > 0)
        {
            printf("Pattern occurs in rightmost position at index:%d\n", string_index(line, pattern));
        }
    }
    return 0;
}
int string_index(char line[], char pattern[])
{
    int i, j, k;
    int last_found = -1;
    for (i = 0; line[i] != '\0'; i++)
    {
        for (j = i, k = 0; pattern[k] != '\n' && pattern[k] == line[j]; j++, k++)
            ;
        {
            if (pattern[k] == '\n')
            {
                last_found = i;
            }
        }
    }
    return last_found;
}