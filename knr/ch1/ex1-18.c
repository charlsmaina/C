/*Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.

**Trailing blanks and tabs are spaces that are found at the end of a line, before a newline character: -

Pseudocode:
    - Parse the input character by character: 
    - I need to read a line , then indentify the newline , then backtrack, from new line looking for either blank or tab,untill i find that the charactr i am is not a trailing space, then increment the index and then append the new line.

*/

#include <stdio.h>
#define LIMIT 100 // maximum size of the character array

int readLine(char line[],int lim ); // line[] is for storing the line: lim is for ensuring we read the line up to the required array boundary
int removeLine(char line[]); // function to remove the trailing blanks

int main()
{
 char line[LIMIT]; // an array with max size of 100 characters

 while (readLine(line,LIMIT) > 0) // not an empty line
 {
    int len;                     // length or parsed line
    if ((len = removeLine(line)) > 0)
    printf("%sLength after parsing:%d\n",line,len); 
 }
 
}

int readLine(char line[],int lim)
{
    int c,i;
    i = 0;
    while ((c = getchar())!= EOF && c != '\n' && i < lim - 2) // I parsed on a per line basis so i had to jump out of the loopat the end of each line
    {
        line[i] = c ;
        i++;
    }
    if (c == '\n' && i > 0) // ignores blank lines: those with no character
    {
        line[i] = '\n';
        i++;
     
    }
       line[i] = '\0'; //This is places in the last position. Thats we have to ensure we reserve a place for '\0' and '\n' when checking for array bounds:
       if (i > 0)
             printf("Length before parsing:%d\n",i);
       return i;
    
    
}
int removeLine(char line[])
{
    int i = 0;
    for ( i = 0; line[i] != '\n' ; i++)
   ;
   --i;
   while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
  i--;

  if (i >= 0)
  {
   
  i++;
  line[i] = '\n';
  i++;
  line[i] = '\0';
   
  }
  return i;
  
/*
How does this removeLine function work?
 
 It works by first indentifying the newline. After that it backs off one position backwards and then backtracts in a step wise manner each time checking if the current character is a character differnt from the blank or the tab characters. If a diffent character is detected. We increment the index and append the newline and finally termninate the string with a /0.

*/
    
}