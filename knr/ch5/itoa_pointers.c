#include <stdio.h>

/*atoi gets a number n and converts n to a string, since it is using a pointer, it takes in a pointer as am argument, a pointer pointing to that number, */
void itoa(int number, char *);
void reverse(char *string_pointer);
int main(void)
{
    int number;
    char ptr = 'c';

    char *string_ptr;
    string_ptr = &ptr;

    number = 1234;

    itoa(number, string_ptr);

    putchar(*string_ptr);

    printf("\nString: ");

    while (*string_ptr)
    {
        putchar(*string_ptr);
        string_ptr++;
    }
    putchar('\n');
}
void itoa(int number, char *string_ptr)
{

    char *temp_string_ptr;
    temp_string_ptr = string_ptr;

    while (number % 10 > 0)
    {
        *temp_string_ptr = (number % 10) + '0';
        temp_string_ptr++;
        number /= 10;
    }

    *temp_string_ptr = '\0';

    printf("String digits length :%ld\n", temp_string_ptr - string_ptr);

    reverse(string_ptr);
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
        temp = *string_pointer;

        *string_pointer = *temp_string_pointer;
        *temp_string_pointer = temp;

        temp_string_pointer--;
        string_pointer++;
    }
}
