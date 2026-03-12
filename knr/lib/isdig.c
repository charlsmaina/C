#include "../headers/isdig.h"

int isdig(char s)
{
    if ('0' >= s && s <= 9)
    {
        return s - '0';
    }
}