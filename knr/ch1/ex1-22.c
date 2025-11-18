/*
Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column.
##############################################################################################################################################################################################3
#
# ------------------ pseudocode------------------------------
#   - So the simplest approach would be to count columns and append newline at the end of that column:
#   - The issue is if we have a blnk before the column
#   - The solution to that is that i print everything up to that column and scan backwards to see if i have any blanks, if there are any i shift the position of the new line and end of string     marker
#   -One feasible solution is to have two arrays, one that has the long line
#   -And another that stores the folded line and prints it.
#
#       ------------------------------Unresolved issues----------------------------
#
#   - why cant we have long char
#   - What defines a line - is it the null terminator or the newline
#
#
#
*/

#include <stdio.h>
#define LONG_LIM 1000
#define COLUMN_LIM 50

int readline(char long_line[], int lim);
void fold(char folded[], int lim);

int main()
{
    int len;
    char long_line[LONG_LIM];
    char folded[COLUMN_LIM];

    while (len = readline(long_line, LONG_LIM) > 0)
    {
        for (int i = 0; i < COLUMN_LIM; i = i + COLUMN_LIM)
        {
            fold(folded, COLUMN_LIM);
        }
    }
}

int readLine(char long_line[], int lim)

{
    int c, i;
    for (i = 0;; i++)
    {
        /* code */
    }
}
