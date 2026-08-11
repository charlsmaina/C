
/*This program is used to illustrate how an array of pointers work. To do so, multiple user lines are stored in an array of pointers with each pointer pointing to a unique line*/

#include <stdio.h>
#include "../headers/ge_tline.h"
#define MAXLINES 100
#define BUFFER 8000

int readlines(char *linesptr, int max_lines);
void write_lines(char *linesptr);

int main()
{
    char *lines[MAXLINES];
    readlines(lines, MAXLINES);
    writelines(lines);
}
