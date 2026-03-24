#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_int(int *pn);
int getch(void);
void ungetch(int);
#define SIZE 100

int main()
{
    int numbers[SIZE];
    for (int i = 0; i < SIZE && get_int(&numbers[i]); i++) // populates an array with numbers
        ;

    for (int i = 0; i < 10; i++)
    {
        printf("Interger value at index %d is :%d\n", i, numbers[i]);
    }
}

int get_int(int *pn) // gets a number and stores in in the pointer: int return is for EOF - signaling number
{
    int c;
    int sign;
    while (isspace(c = getch())) // skip whitespace
        ;
    if (!isdigit(c) && c != EOF && c != '-' && c != '+')
    {
        ungetch(c); /*Not a number*/
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '-' || c == '+')
    {
        c = getch();
    }
    for (*pn = 0; isdigit(c); c = getch())
    {
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;
    if (c != EOF)
    {
        ungetch(c);
    }
    return c;
}

int BUFFER[SIZE];
int buf_pointer = 0;

int getch(void)
{
    return buf_pointer > 0 ? BUFFER[--buf_pointer] : getchar();
}
void ungetch(int c)
{
    if (buf_pointer < SIZE)
    {
        BUFFER[buf_pointer++] = c;
    }
    else
        printf("Error: Buffer full\n");
}