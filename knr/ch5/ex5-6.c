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

char *alloc();
char *ge_tline(void);
int main()
{
    char *returned_add;
    returned_add = ge_tline();
    while (*returned_add != '\n')
    {
        putchar(*returned_add++);
    }
}
char *ge_tline(void)
{
    int c;
}