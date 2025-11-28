/*
Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.

pseudocode:
    1. Each time you scan a letter in s1, we transverse s2 and check if we have that character in s2 and only append it if it is not there: scan a certain string and check if that letter apperas in that letter
    2. What i do is i have three variables: two for transversing the two arrays : and one for overwriting -
    3. The only way we can delete is to overwrite s1 array indexes. So the third variable writes characters that are not in s2 to consequtive indices
    4. I use flags IN_S2 and NOT_IN_S2 to track if the curent character is in s2 and if it is not in s2 i append that character at index c and increment c

*/

#include <stdio.h>
#define LIMIT 20
#define IN_S2 1
#define NOT_IN_S2 0

void squeeze(char s1[], char s2[]);
int ge_tline(char line[], int lim);

int main()
{
    char s1[LIMIT];
    char s2[LIMIT];
    int len1, len2;

    while ((len1 = ge_tline(s1, LIMIT)) > 0 && (len2 = ge_tline(s2, LIMIT)) > 0)
    {
        printf("s1 :%s\n", s1);
        printf("s2 : %s\n", s2);
        squeeze(s1, s2);
    }
}

void squeeze(char s1[], char s2[])
{
    int a, b, c, status;
    status = NOT_IN_S2;
    a = b = c = 0;
    for (a = 0; s1[a] != '\0'; a++)
    {
        for (b = 0; s2[b] != '\0'; b++)
        {
            if (s1[a] != s2[b])
            {
                status = NOT_IN_S2;
            }
            else
            {
                status = IN_S2;
                break;
            }
        }
        if (status == NOT_IN_S2)
        {
            s1[c++] = s1[a];
        }
    }
    s1[c] = '\0';
    printf("Parsed s1: %s \n", s1);
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
        line[i++] = '\n';
    }
    line[i] = '\0';

    return i;
}