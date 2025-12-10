/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
a function for the other direction as well, converting escape sequences into the real characters.


------Pseudocode -----
- I need two string arrays
- A function to read a line
- Switch('t[i])
- Default case : just copy
- case '\t' - print a tab
- case 'n' - print a newline char
*/
#include <stdio.h>
#define ARRAY_LIM 20
int ge_tline(char line[], int lim);
void escape(char s[], char t[]);

int main()
{
    char s[ARRAY_LIM];
    char t[ARRAY_LIM];
    int len;
    while ((len = ge_tline(s, ARRAY_LIM)) > 0 && (len = ge_tline(t, ARRAY_LIM)) > 0)
    {
        escape(s, t);
    }
}
