#include "../headers/itoa.h"
#include "../headers/reverse.h"
#include "../headers/ge_tline.h"
#include "../headers/atoi.h"
#include <stdio.h>
#define LIMIT 10

int main(void)
{
    int len, n;
    char s[LIMIT];
    while ((len = ge_tline(s, LIMIT)) > 0)
    {
        n = atoi(s);
        itoa(n, s);
    }
    return 0;
}