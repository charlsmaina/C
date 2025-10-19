/*
Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
the length of arbitrary long input lines, and as much as possible of the text.

#######################################################################################################################################################################################
#
#----------------------------------------------pseudocode -------------------------------------------------------------------------------------
# - So here the main task is how to continue counting the line content until we reach the end but we want to save the line length that just fits in the array
# - To print this long line - we have to leave a place for the new line and the null terminator
# - Thats where another variable j is introduced
# - j is used to append letters to the array while i used for counting only
#
#######################################################################################################################################################################################


*/
#include <stdio.h>
#define MAXLINE 30 // defines maximum array size - translates to the maximum characters that the array can hold

int get_line(char line[], int maxline); // a function for getting a line from user input and returning its length
void copy(char to[], char from[]);      // copies the longest seen line from the input to another array that holds the longest line

int main()
{
    int maxl; // longest line length - compared with present length to find out if the new line length is higher than current maximum length
    int len;  // current line length - Holds the value of the length of the recently read line

    int i;

    char line[MAXLINE];    // array for storing characters as they are read
    char longest[MAXLINE]; // array for storing the longest line

    maxl = 0;

    while ((len = get_line(line, MAXLINE)) > 0) // If we have a line.ie length != 0
    {
        printf("%d,%s", len, line);
        if (len > maxl)
        {
            maxl = len;
            copy(longest, line);
        }
    }

    if (maxl > 0)
        printf("%s", longest); // The %s expects a string of characters terminated by a \0
    return 0;
}

int get_line(char line[], int lim)
{
    int c; // for reading out characters
    int i;
    int j;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        if (i < lim - 2)
        {
            line[j] = c;
            j++;
        }
    }

    // so we want to append newline separately so that we are sure we are out of a line
    if (c == '\n')
    {
        line[j] = '\n';
        j++;
        ++i;
    }

    line[j] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}