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
    int pattern_len;

    printf("Pattern input \n\n");
    if ((pattern_len = ge_tline(pattern, PATTERN_LEN)) > 2)
    {
        printf("\nLine input\n\n");

        while ((len = ge_tline(line, MAXLINE)) > 0 && pattern_len > 0)
        {
            if (strindex(line, pattern) >= 0)
            {
                printf("%s", line);
            }
        }
    }
    else
        printf("Enter valid pattern\n");
}