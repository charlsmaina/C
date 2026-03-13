#include "../headers/atof2.h"

#include "../headers/isdig.h"
#include "../headers/is_space.h"

float atof2(char string[])
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
