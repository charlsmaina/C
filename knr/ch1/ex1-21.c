/*
Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?

##############################################################################################################################################################################3
#
# ------------------------------------------------------pseudocode------------------------------------------------------------------------------------
# - The problem is about replacing blanks by minimum number of tabs and blanks to achieve the same spacing
# - Previously entab taught me the concept of tab stops.. where the number of spaces to replace the tab space are determined by the number of spaces remaining to reach a tab    #  stop. We do tabwidth - column % tabwidth
# - it seams , i



*/
#include <stdio.h>
#define TABWIDTH 8
int main()
{
    int position, c, tabc, blanksc;
    position = 1;

    for (int i = 0; (c = gechar()) != EOF; i++)
    {
        if (c == ' ')
        {
            if (position % TABWIDTH != 0)
            {
                blanksc++;
                position++;
            }
            else
            {
                tabc++;
                blanksc++;
                position++;
            }
        }
        else
        {
            for (; tabc > 0; tabc--)
            {
                putchar('\t');
            }
            if (c = '\t')
            {
                blanksc = 0;
            }
            else
            {
                for (; blanksc > 0; blanksc--)
                {
                    putchar(' ');
                }
            }
                }
    }
}
