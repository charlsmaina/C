/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
a function for the other direction as well, converting escape sequences into the real characters.gcc


------Pseudocode -----
- I need two string arrays
- A function to read a line
- Switch('t[i])
- Default case : just copy
- case '\t' - print a tab
- case 'n' - print a newline char
*/
#include <stdio.h>
#include "../headers/ge_tline.h"
#define ARRAY_LIM 100
int ge_tline(char line[], int lim);
void escape(char s[], char t[]);
void unescape(char t[], char s[]);
int main()
{
    char s[ARRAY_LIM];
    char t[ARRAY_LIM];
    int len;
    while ((len = ge_tline(s, ARRAY_LIM)) > 0 && (len = ge_tline(t, ARRAY_LIM)) > 0)
    {
        escape(s, t);
        unescape(t, s);
        return 0;
    }
}

void escape(char s[], char t[])
{
    int i, j;
    for (i = 0, j = 0; t[j] != '\0'; j++)
    {
        switch (t[j])
        {
        case '\t':
            s[i++] = '\\';
            s[i++] = 't';
            break;
        case '\n':
            s[i++] = '\\';
            s[i++] = 'n';
            break;
        default:
            s[i++] = t[j];
            break;
        }
    }
    s[i] = '\0';
    printf("\nLine 2 copied to line 1 with visible escape sequence !\n%s", s);
}

void unescape(char t[], char s[])
{
    int i;
    int j;
    for (i = 0, j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != '\\')
        {
            t[j++] = s[i];
        }
        else
            switch (s[++i])
            {
            case 'n':
                t[j++] = '\n';
                break;
            case 't':
                t[j++] = '\t';
                break;

            default:
                t[j++] = '\\';
                t[j++] = s[i];
                break;
            }
    }
    s[j] = '\0';
    printf("\n\nLine with escape characters reconfigured!\n%s", t);
}