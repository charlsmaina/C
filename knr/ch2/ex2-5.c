/*
Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.)

#################################################################################################################################################################################
#
#-------------------------pseudocode ---------------------------------
#   -So this function any is supposed to check for the location in s1 where a character in s2 occurs
#   - So parse s2 characterwise - then parse s1 stringwise - incase i find a match - return the position:
#
#
*/
#include <stdio.h>
#define LIMIT 20
int ge_tline(char line[], int lim);
int any(char s1[], char s2[]);

int main()
{
    char s1[LIMIT];
    char s2[LIMIT];

    int len1, len2, pos;
    while ((len1 = ge_tline(s1, LIMIT)) > 0 && (len2 = ge_tline(s2, LIMIT)) > 0) // reads two strings
    {

        for (int i = 0; s2[i] != '\0'; i++) // picks string 2 characterwise
        {
            char temp[2] = {s2[i], '\0'}; // a temporary array to hold the string 2 character for comparison purpose
            pos = any(s1, temp);          // position in s1 where the character occurs

            if (pos == -1)
            {
                printf("%c does not occur in s1\n", s2[i]);
            }
            else
                printf("%c in s2 occurs first in index %d   in s1\n", s2[i], pos);
        }
    }
}
int ge_tline(char line[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = '\0';
    }

    return i;
}
int any(char s1[], char temp[])
{
    int i, j;
    for (i = 0; temp[i] != '\0'; i++)
    {
        for (j = 0; s1[j] != temp[i] && s1[j] != '\0'; j++)
            ;
        if (s1[j] == '\0')
            return -1;
        else
            return j;
    }
}