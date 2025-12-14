#include "../headers/reverse.h"
#include "../headers/ge_tline.h"
#include <stdio.h>
#define LIMIT 10
int main(void)
{
    char line[LIMIT];
    int len;
    while ((len = ge_tline(line, LIMIT)) > 0)
    {
        reverse(line);
    }
    return 0;
}