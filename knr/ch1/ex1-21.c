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
# - Here i have to keep track of blanks and group them into bundles of TABWIDTH for i to insert a tab



*/
#include <stdio.h>
#define TABWIDTH 8
int main()
{
    int pos, c, tabc, blanksc;

    tabc = blanksc = 0;

    for (pos = 1; (c = gechar()) != EOF; pos++) // am reading characterwise:
    {
        if (c == ' ')
        {
            if (pos % TABWIDTH != 0)
            /*What this condition is checking is whether am in a position that is a multiple of the TABWIDTH. If not so i increase the blanks , and if so, i increase the tabs count. My previous confusion was  when i encounter a space at a multiple of TABWIDTH position, say like 8, and i increae the tab counts while in reality it was just a space. FYI, putting  a tab would print 8 spaces

            : after evaluating  how spaces are inserted from tabs:
            The formula is:
              - spaces = TABWIDTH - ((pos - 1) % TABWIDTH)

              - So even here, when am in position 8, and i encounter a space
              - The tab that i increment will have to be converted to corresponding spaces using the above formula
              - And since am in position 8, only a single space will be appended , since its 8 - 7

              - Lets take another scenario where am in position 16 and the last 3 characters have been spaces:, i will increment the tabs count and reset the blanks count to zero: so the point of confusion is who manages the position of the output console: the system manages that, so i parse my side using the columns and wait for the system to manage its side

              - Like if the last point where putchar() was called was in column 13, then when i print a tab ( to replace the three blanks in 14,15,16 columns), then the tab is converted to corresponding spaces using the above formula, which as it turns out to be three spaces to reach column 16.




            */
            {
                ++blanksc;
            }
            else
            {
                blanksc = 0;
                tabc++;
            }
        }
        else
        {
            for (; tabc > 0; tabc--)
            {
                putchar('\t'); // print out the tabs
            }
            if (c == '\t')
            /*
            Forgets the blanks: HOW??

            - Since tabs are essentially calculated blanks:, imagine a scenario where we  have tab being interpreted as blanks,but it will eventually be converted to a tab, why reset blanks to zero while the converting logic takes care of that??

            -Understood: so  '\t' is taken as non blank character and hence not parsed into corresponding spaces, so am not getting how it wipes out blans
            */
            {
                blanksc = 0;
            }
            else
            {
                for (; blanksc > 0; --blanksc)
                {
                    putchar(' ');
                }
            }
            putchar(c);
            if (c == '\n')
            {
                pos = 0;
            }
            else if (c == '\t')
            {
                pos = pos + (TABWIDTH - (pos - 1) % TABWIDTH) - 1;
            }
        }
    }
}
