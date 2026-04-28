
/*This a pointer version of the function getline(), getline() returns the length of the line*/

#include <stdio.h>
#define LIMIT 50
#define LINE_BUFFER 150

int ge_tline(char *line, int limit);
int main(void)
{
    char line[LINE_BUFFER];
    char *line_p = line;
    if (ge_tline(line_p, LIMIT) > 0)
    {
        while (*line_p)
        {
            putchar(*line_p);
            line_p++;
        }
    }
    else
        printf("No line input\n");
}

int ge_tline(char *line, int limit)
{
    int c;
    char *temp_line;
    temp_line = line;
    while (--limit > 0 && (c = getchar()) != EOF && c != '\n')
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
