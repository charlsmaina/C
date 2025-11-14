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
        printf(" Original line: %s", line);
        reverse(line);
    }
}
int lineGet(char line[], int lim)
{
    int c, i, j;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        if (j < lim - 2)
        {
            line[j] = c;
            j++;
        }
    }

    if (c == '\n')
    {
        line[j] = '\n';
        j++;
        i++;
    }
    line[j] = '\0';

    return i;
}

void reverse(char line[])
{

    int i;
    int tempV;
    for (i = 0; line[i] != '\0'; i++)
        ;

    printf(" Reversed line: ");

    /*
    -------------------- This works but is abit mechanical -  reversing a string in entirety is more desirable that charactrwis reversing-----------
    i = i - 2;



    while (i >= 0)
    {
        printf("%c", line[i]);
        i--;
    }
    printf("\n");

    */

    i--; // backs off \0 position: a line cannot be printed if it begins with end of sring marker

    if (line[i] == '\n')
        i--; // backs off to leave newline intact

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

- Here the string is printable as a string and hence works -
-
*/
