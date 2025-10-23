/*
 Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.

pseudocode:
    1. Read a line
    2. Indentify new line
    3. Print backwards.
*/

#include <stdio.h>

#define LIMIT 100
int lineGet(char line[], int lim);
void reverse(char line[]);

int main()
{
    int len;
    char line[LIMIT];

    while ((len = lineGet(line, LIMIT)) > 0)
    {
        printf(" Original line:: %s\n", line);
        reverse(line);
    }
}
int lineGet(char line[], int lim)
{
    int c, i;
    i = 0;
    while ((c = getchar()) != EOF && c != '\n' && i < lim - 1)
    {
        line[i] = c;
        i++;
    }
    if (c == 'n')
    {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    return i;
}

void reverse(char line[])
{
    printf(" Reversed line:: ");
    int i;
    int tempV;
    for (i = 0; line[i] != '\0'; i++)
        ;
    i--;

    if (line[i] == '\n')
        i--;

    int j = 0;

    while (j < i)
    {
        tempV = line[j];

        line[j] = line[i];
        line[i] = tempV;

        i--;
        j++;
    }

    printf("%s", line);
}

/*
 The version works but its very mechanical
- I want to make it possible to print line as a string and not to print isolated characters - so that means reversing the array in totality
*/
