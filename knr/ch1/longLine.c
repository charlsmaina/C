//This program is used to copy the longest line at the output console  after a user enters a number of lines
#include <stdio.h>
#define MAXLINE 1000 //defines maximum array size - translates to the maximum characters that the array can hold

int get_line (char line[], int maxline); // a function for getting a line from user input and returning its length
void copy(char to[],char from[]);//copies the longest seen line from the input to another array that holds the longest line

int main()
{
    int maxl;//longest line length - compared with present length to find out if the new line length is higher than previously seen lengths
    int len;//current line length - Holds the value of the length of the recently read line
   
    int i;

    char line[MAXLINE];//array for storing characters as they are read
    char longest[MAXLINE];//array for storing the longest line

    maxl = 0 ;

    while ((len = get_line (line, MAXLINE)) > 0) //If we have a line.ie length != 0
    
        if (len > maxl)
        {
            maxl = len ;
            copy(longest,line);
        }

   if (maxl > 0)
   printf("%s", longest);// The %s expects a string of characters terminated by a /0
   return 0;

   
    
}

int get_line (char line[], int lim)
{
   int c;//for reading out characters
   int i ;
   i = 0 ;
   while ((c = getchar())!= EOF && c != '\n' && i < lim - 1) // i must not exceed lim-1 :since we started at zero:lim-1 is reserved for storing \0 character
   {
       line[i] = c ;     //append all characters except new linw
       ++i ;             
    
    
   }

   //so we want to append newline separately so that we are sure we are out of a line 
   if (c == '\n')
   {
    line[i] = c ;
    ++i;
   }

   line[i] = '\0';
   return i;
   
}

void copy(char to[],char from[])
{ 
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0')
    ++i;
    
    
}