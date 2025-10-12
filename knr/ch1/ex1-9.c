/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/
#include <stdio.h>
enum blank
{
    NO,
    YES
};

int main()
{
    int c, blank;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ') // normal characters are printed on the screen
        {
            putchar(c);
            blank = NO; // flag to monitor if we have a previous blank space
        }

        else
        {
            if (blank == NO) // check if previous character was a blank
            {
                putchar(c);
                blank = YES; // flag is set when we encounter a blank
            }
        }
    }
}

/*
             What is happening:
         * Blank in this case is a flag
         * This flag is set to zero as long as a blank has not been detected and set to 1 when detected helping filter out multiple blanks


*/