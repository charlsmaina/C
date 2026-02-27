#include <stdio.h>
#include "../headers/ge_tline.h"
#include "../headers/strindex.h"
#define MAXLINE 100
#define PATTERN_LEN 10

int main()
{
    char line[MAXLINE];

    char pattern[PATTERN_LEN];

    int len;
    len = 0;

    while ((len = ge_tline(line, MAXLINE)) > 0)
    {
        if (strindex(line, pattern, PATTERN_LEN) >= 0)
        {
            printf("%s", line);
        }
    }
}