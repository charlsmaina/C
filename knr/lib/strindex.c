#include "../headers/strindex.h"
#include <stdio.h>
#include <string.h>
#include "../headers/ge_tline.h"

int strindex(char line[], char pattern[])

{
    int i, j, k;
    int len_line;
    int len_pattern;

    len_pattern = strlen(pattern); // length of pattern

    for (i = 0; i < line[i] != '\0'; i++)
    {
        for (k = i, j = 0; j < len_pattern - 1 && line[k] == pattern[j]; k++, j++) /*len_pattern-1 because of the nature of the working of the ge_tline: so essentially ge_tline appends a newline and a null terminator to every string that is handled to it. strlen outputs the newline as part of that length but we dont want the newline to be part of the pattern: so we check the pattern up to len_pattern - 1: so essentially the element at pattern[len_pattern - 1] is a new line character*/
            ;
        if (j == len_pattern - 1)

            return i;
    }
    return -1;
}

/*
 The best way out of this is: have the stringindex receive the pattern to check, the user can input the pattern. Then pass this pattern to strindex from main.Dont worry about its length:
*/