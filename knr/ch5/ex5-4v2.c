/*
Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise.

-----------------------problem statement---------------------------
#   check if a string ends with a given string
-----------------------pseudocode----------------------------------------------
# In the previous exercise , the  way computation is done is somehow so mechanical: we stop at each character and examine the end string multiple times
# In this version: ending string is checked starting from the end of the string then backwards. So , eventually we do just a single check
#
*/

#include <stdio.h>
int strend(char *string_1, char *string_2);

int main()
{
    char *s1 = "Rastafarianism";
    char *s2 = "ism";

    if (strend(s1, s2))
    {
        while (*s1)
        {
            putchar(*s1++);
        }
        printf(" ends with ");
        while (*s2)
        {
            putchar(*s2++);
        }
        putchar('\n');
    }
    else
    {
        while (*s1)
        {
            putchar(*s1++);
        }
        printf(" does not end with ");
        while (*s2)
        {
            putchar(*s2++);
        }
        putchar('\n');
    }
}

int strend(char *string_1, char *string_2)
{
    char *t_string2;
    t_string2 = string_2;

    while (*string_1) // when this loop is false, string_2 points to the null terminator
    {
        string_1++;
    }

    while (*t_string2) // loop exits when string_1 points to null
    {
        t_string2++;
    }

    while (*string_1 == *t_string2 && t_string2 >= string_2)
    {
        t_string2--;
        string_1--;
    }
    if (t_string2 == string_2)
    {
        return 1;
    }
    else
        return 0;
}