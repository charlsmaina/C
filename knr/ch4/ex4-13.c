/*
Exercise 4-13. Write a recursive version of the function reverse(s), which reverses the
string s in place.

------------pseudocode-------------------------
- recurse until you find string terminator, print now backwards
*/

#include <stdio.h>

void reverse(char string[]);
int main()
{
    char string[] = "Charles";
    printf("String:%s\n", string);
    reverse(string);
    printf("Reversed string:%s\n", string);
}

void reverse(char string[])
{
    static int i = 0;
    char c;
    if ((c = string[i++]) != '\0')
    {
        reverse(string);
    }
    else
        i = 0;
    string[i++] = c;
    string[i] = '\0';
}
