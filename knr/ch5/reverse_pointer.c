/* pointer version of reverse string*/
#include <stdio.h>
#include <stddef.h>
void reverse(char *string_pointer);
int main()
{
    char name[] = "MAINA";
    reverse(name);
    char *str_ptr = name;
    while (*str_ptr)
    {
        putchar(*str_ptr++);
    }
    putchar('\n');
}
void reverse(char *string_pointer)
{
    char *temp_string_pointer = string_pointer;

    while (*temp_string_pointer)
    {
        temp_string_pointer++;
    }
    temp_string_pointer--;

    while (temp_string_pointer > string_pointer)
    {
        int temp;
        temp = *string_pointer; /*String pointer is visible at this point)*/

        *string_pointer = *temp_string_pointer;
        *temp_string_pointer = temp;

        temp_string_pointer--;
        string_pointer++;
    }
}
