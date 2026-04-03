/*
Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise.

-----------------------problem statement---------------------------
#   check if a string ends with a given string
-----------------------pseudocode----------------------------------------------
# Use two nested loop : the two strings should be pointers: for each character in string 1 check if there is a match in string 2 and return a 1 if null is reached in string 2
#
*/

#include <stdio.h>
int strend(char *string_1, char *string_2);

int main()
{
    char *s1 = "Willingfuness";
    char *s2 = "ness";

    if (strend(s1, s2))
    {
        while (*s1)
        {
            putchar(*s1++);
        }
        printf(" ends with");
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
    char *temp;
    char *temp_2;

    while (*string_1)
    {
        temp = string_1;
        temp_2 = string_2;

        while (*temp_2 == *temp && *temp != '\0')
        {
            temp_2++;
            temp++;
        }
        string_1++;

        if (*temp == '\0' && *temp_2 == '\0')
            return 1;
    }
    return 0;
}