#include <stdio.h>
#define LIMIT 50

int ge_tline(char *line, int limit);
int main(void)
{
    char *line;
    if (ge_tline(line, LIMIT) > 0)
    {
        while (*line)
        {
            putchar(*line);
            line++;
        }
    }
}

int ge_tline(char *line, int limit)
{
    int c;
    char *temp_line;
    temp_line = line;
    while (--limit > 0 && (c == getchar()) != EOF && c != '\n')
    {
        *temp_line = c;
        temp_line++;
    }
    if (c == '\n')
    {
        *temp_line = '\n';
        temp_line++;
    }
    *temp_line = '\0';
    return (temp_line - line);
}
