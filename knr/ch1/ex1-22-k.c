/*
Write a program to 'fold' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with  very long lines , and if there are no blanks or tabs before specified column
*/

#include <stdio.h>
#define MAXCOL 10 // maximum column of input
#define TABINC 8  // Tab increment size

char line[MAXCOL]; // input line

int exptab(int pos);
int findblnk(int pos);
int newpos(int pos);
void printl(int pos);

main()
{
    int c, pos;
    pos = 0;
    while ((c = getchar()) != EOF)
    {
        line[pos] = c; // store current character
        if (c == '\t') // expand tab character
        {
            pos = exptab(pos);
        }
        else if (c == '\n')
        {
            printl(pos); // print current input line
            pos = 0;
        }
        else if (++pos >= MAXCOL)
        {
            pos = findblnk(pos);
            printl(pos);
            pos = newpos(pos);
        }
    }
}

/*Printl : print line until pos column*/
void printl(int pos)
{
    int i;
    for (i = 0; i < pos; i++)
    {
        putchar(line[i]);
    }
    if (pos > 0) // if there were charactrs printed
    {
        putchar('\n');
    }
}

int exptab(int pos)
{
    line[pos] = ' '; // tab is at least on blank
    for (++pos; pos < MAXCOL && pos % TABINC != 0; ++pos)
    {
        line[pos] = ' ';
    }
    if (pos < MAXCOL) // room left in current in current line
    {
        return pos;
    }
    else // current line is full
    {
        printl(pos);
        return 0; // reset current position
    }
}

// findblnk : find blanks's position
int findblank(int pos)
{
    while (pos > 0 && line[pos] != ' ')
    {
        --pos;
        if (pos == 0) // no blanks in the line
        {
            return MAXCOL;
        }
        else
            return pos + 1;
    }
}
// newpos : rearrange line with new position

int newpos(int pos)
{
    int i, j;
    if (pos <= 0 || pos >= MAXCOL)
    {
        return 0; // nothing to rarrange
    }
    else
    {
        for (j = pos; j < MAXCOL; j++)
        {
            line[i] = line[j];
            i++;
        }
        return i; // new position in line
    }
}