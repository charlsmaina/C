/*
Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else.
--------------pseudocode-------------------------
#   - The logic of this function is based on the fact that lower and uppercase letters are represented in a tandem manner in the character set
#   - ie. [a-z][A-Z]
#   - What this is supposed to do is : check if a character is a valid character that can fit in the 26 letters - then check if its in uppercase - convert , if #       not uppercase return in lower case
#
*/
#include <stdio.h>
#define LIMIT 10
int check_char(char s);
void lower(char x);
int get_string(char string[], int lim);

int main()
{
    char string[LIMIT];
    int len;
    while ((len = get_string(string, LIMIT)))
    {
        for (int i = 0; i <= len - 1; i++)
        {
            check_char(string[i]) ? lower(string[i]) : putchar(-1);
        }

        return 0;
    }
}
int get_string(char string[], int lim)
{
    char c;
    int i = 0;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != ' ' && c != '\t'; i++)
    {
        string[i] = c;
    }
    string[i] = '\0';
    return i;
}
int check_char(char s)
{
    int i;
    (s >= 'a' && s <= 'Z' || s >= 'A' && s <= 'Z') ? (i = 1) : (i = 0);
    return i;
}
void lower(char x)
{
    (x >= 'A' && x <= 'a') ? (x += 'A - a') : (x = x);
    printf("%c", x);
}