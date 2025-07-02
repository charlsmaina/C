/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/
#include <stdio.h>
int main ()
{
    int c ,blank;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ') //normal characters are printed on the screen
        {
            putchar(c);
            blank = 0;  //flag to monitor if we have a previous blank space

        }
        
        else
        {
            if(blank == 0)  //check if previous character was a blank
            {
                putchar(c);
                blank = 1; //flag is set when we encounter a blank
            }
        }


    }
}