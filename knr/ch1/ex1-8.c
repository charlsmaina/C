// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>
int main()
{
    int blanks,tabs,newlines,c;
    blanks = 0 ;
    tabs = 0 ;
    newlines = 0;

    while ((c = getchar()) != EOF )
    {
        if (c == '\t')
        ++tabs;
        else if (c == '\n')
            ++ newlines;
        else if (c == ' ')
            ++ blanks;
      
      
    }
    printf("Tabs:%d\nNewlines:%d\nBlanks:%d\n",tabs,newlines,blanks) ;
    
}