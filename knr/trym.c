#include "ge_tline.h"
#include <stdio.h>
#define LIMIT 15

int main(void)
{
    int len2;
    char line[LIMIT];
    while ((len2 = ge_tline(line, LIMIT)) > 0)
    {
        printf("Line:%s\n", line);
    }
}