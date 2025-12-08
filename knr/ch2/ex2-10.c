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
int check_char(char s);                 // checks if a character is a valid alphabet character
void lower(char x);                     // converts a character to lower case if its in uppercase and leaves it intact if its in lower case
int get_string(char string[], int lim); // fetches a string from the user

int main()
{
    char string[LIMIT]; // An array of maximum size 10 to store a string that i want to convert to lower
    int len;            // for getting length of a string - ensure we get something
    while ((len = get_string(string, LIMIT)) > 0)
    {
        printf("String: %s\n", string);                         // prints the string we got from the user
        for (int i = 0; i <= len - 1 && string[i] != '\0'; i++) // transverses the string
        {
            check_char(string[i]) ? lower(string[i]) : printf("%d", -1); // checks if the character is valid character
        }
        printf("\n");

        return 0;
    }
}
int get_string(char string[], int lim)
{
    char c;
    int i = 0;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != ' ' && c != '\t' && c != '\n'; i++)
    {
        string[i] = c;
    }
    string[i] = '\0';
    return i;
}
int check_char(char s)
{
    int i;
    (s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z') ? (i = 1) : (i = 0);
    return i;
}
void lower(char x)
{
    (x >= 'A' && x <= 'Z') ? (printf("%c", x += ('a' - 'A'))) : printf("%c", x);
}