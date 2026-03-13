/*
in this program , i will be creating a float string to its float equivalent, i will create my own functions
at its foundation is a function called atof()
Pseudocode:
 - check for space and ignore it
 - check for sign
 - check for digits and then convert to a number :
 - number = i*10 + digit
 - then check for decimal point
 - add decimal part
 - monitor the powers to divide resultant value by 10
*/

#include <stdio.h>
#include "../headers/ge_tline.h"
#define MAXLINE 100

float atof(char string[]);
int is_space(char c);
int isdig(char s);

int main()
{

    char float_string[MAXLINE];
    int len = ge_tline(float_string, MAXLINE);

    float numerical_value_of_string = atof(float_string);
    printf("The numerical value of the string is: %f\n", numerical_value_of_string);
    return 0;
}

float atof(char string[])
{
    int i;
    int sign;

    for (i = 0; is_space(string[i]); i++)
        ;
    sign = (string[i] == '-') ? -1 : 1;
    if (string[i] == '-' || string[i] == '+')
        i++;

    float value = 0.0;
    int digit;
    float power;

    power = 1.0;

    for (; isdig(string[i]); i++)
    {
        digit = string[i] - '0';
        value = value * 10 + digit;
    }
    if (string[i] == '.')
    {
        i++;

        while (isdig(string[i]))
        {
            digit = string[i] - '0';
            value = value * 10 + digit;
            power *= 10;
            i++;
        }
    }
    return sign * (value / power);
}

int isdig(char s)
{
    if ('0' <= s && s <= '9')
        return 1;
    else
        return 0;
}

int is_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f')
        return 1;
    else
        return 0;
}