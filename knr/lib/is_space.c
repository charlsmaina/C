#include "../headers/is_space.h"
int is_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f')
        return 1;
    else
        return 0;
}