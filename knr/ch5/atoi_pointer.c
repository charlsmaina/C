/*
This is the pointer version of th function atoi()
- atoi takes a string that is in ascii format and converts it to an interger
- It accepts a pointer as its argumnt and returns the numerical value
*/

#include <stdio.h>
#include <ctype.h>

int atoi(char *string);
int main()
{
    char string[] = "1234";
    printf("String numerical value:%d\n", atoi(string));
}
int atoi(char *string)
{
    int numerical_value;
    numerical_value = 0;
    while (isspace(*string))
        string++;
    while (*string)
    {
        if ('0' <= *string && *string <= '9')
        {
            numerical_value = numerical_value * 10 + (*string - '0');
            string++;
        }
    }

    return numerical_value;
}