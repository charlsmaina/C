/*Exercise 5-6. Rewrite appropriate programs from earlier chapters and exercises with pointers
instead of array indexing. Good possibilities include getline (Chapters 1 and 4), atoi, itoa,
and their variants (Chapters 2, 3, and 4), reverse (Chapter 3), and strindex and getop
(Chapter 4).

---------------------------------------------pseudocode-------------------------------------------------------------------------

------------------------ -----getline-------------------------------------------------------------------------------------------

- instead of passing an array, pass a pointer and return the starting address of the line as a pointer, this means after finishing reading, you need to roll back the pointer to the begining of that pointer


*/

#include <stdio.h>
#define BUFFER 150

char *alloc(int size);
char buffer[BUFFER];

char *buffer_pointer = buffer;
char *ge_tline(void);

int main()
{
    char *returned_add;
    returned_add = ge_tline();
    while (*returned_add)
    {
        putchar(*returned_add);
        returned_add++;
    }
}
char *ge_tline()
{
    int c;
    int size = 50;
    char *line_start = alloc(size);
    char *line = line_start;
    for (int i = 0; i < (size - 2) && (c = getchar()) != EOF && c != '\n'; i++)
    {
        *line = c;
        line++;
    }

    if (c == '\n')
    {
        *line = '\n';
        line++;
    }

    *line = '\0';
    return line_start;
}
char *alloc(int size)
{
    if ((buffer_pointer + size) < (BUFFER + buffer))
    {
        buffer_pointer + size;
        return buffer_pointer - size;
    }
    else
        printf("Not enough space\n");
}