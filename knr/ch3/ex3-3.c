/*
Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either
case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange
that a leading or trailing - is taken literally.

 What i think:
 - Have a complete set of each uppercase and lowercase in s2 -this is somehow ineffective
 - S along as i know the ascii value of A or Z - i can print the remaining letters by just incrementing the index and printing it as char
 - bUt the question requires the string to be stored in  S2
 - the solution is:
 ---------------------pseudocode-----------------------
 - read a character - check if next symbol is a -
 - if it is - copy it to s2 - each time incrementing the value of the character copied until it is less or equal to the value after -
*/

#include <stdio.h>
#include "../headers/ge_tline.h"
#define LIMIT 100
int main()
{
    char s1[LIMIT];
    char s2[LIMIT];
    int len;
    while ((len = ge_tline(s1, LIMIT)) > 0)
    {
        int i, j;
        char c;
        printf("S1:%s\n", s1);
        i = 0, j = 0;

        while ((c = s1[i++]) != '\0')
        {
            if (s1[i] == '-' && s1[i + 1] >= c)

            {
                i++;
                while (s1[i] > c)
                {
                    s2[j++] = c++;
                }
            }
            else
                s2[j++] = c;
        }
        s2[j] = '\0';
        printf("Expanded line:\n%s", s2);
    }
}