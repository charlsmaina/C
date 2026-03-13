#include "../headers/isdig.h"

int isdig(char s)
{
    if ('0' <= s && s <= '9')
        return 1;
    else
        return 0;
}