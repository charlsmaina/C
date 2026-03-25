/*
Exercise 5-2. Write getfloat, the floating-point analog of getint. What type does
getfloat return as its function value?
--------------------------------------problem statement----------------------------------------------------
# I need to implement a pointer of type float that points to the indices of an array. I need to allow for decimal points as i formulate the number

-------------------------------------pseudocode-------------------------------------------------------------
# define a function get_float : that take a pointer of type float as it argument and still returns int : to signal EOF and 0 to signal not a number
## Inside the get_float function : skip space, check is character is not EOF,a sign ie + or - ,and not a point/decimal indicator
### check for sign, then formulate the number, when you get to point, continue with the number formulation
####

*/

#include <ctype.h>
#include <stdio.h>
#define SIZE 100

int get_float(float *fp);
void ungetch(int c);
int getch(void);

int main()
{
    float float_numbers[SIZE];
    for (int i = 0; i < SIZE && get_float(&float_numbers[i]); i++)
        ;

    for (int i = 0; i < 10; i++)
        printf("Value of float at index %d is %f\n", i, float_numbers[i]);
}
int get_float(float *fp)
{
    int c;
    int sign;
    int power;
    while (isspace(c = getch()))
        ; /*skip spaces*/
    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.')
    {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;

    for (*fp = 0; isdigit(c); c = getch())
    {
        *fp = *fp * 10 + (c - '0');
    }

    if (c == '.')
    {

        for (power = 1; isdigit(c = getch()); power *= 10)
        {
            *fp = *fp * 10 + (c - '0');
        }
    }
    *fp = (*fp * (float)sign) / (float)power;

    if (c != EOF)
    {
        ungetch(c);
    }
    return c;
}

int BUFFER[SIZE];
int buf_pointer;

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
        printf("Error: Buffer overflow detected\n");
}