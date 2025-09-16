/*Revise the main routine of the longest-line program so it will correctly print
the length of arbitrary long input lines, and as much as possible of the text.*/
#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[],int lim);
void copy(char to[],char from[],int maxlen);

int main()
{
    char line[MAXLINE];
    char longest[MAXLINE];
    
    int len,maxlen;

    len = 0 ;
    maxlen = 0;


    while((len = get_line(line,MAXLINE)) > 0)
    {
        if(len > maxlen )
        {
            maxlen = len;
            copy(longest,line,maxlen);
        }
    }

if (maxlen > 0){
    printf("Longest line has: %d characters\n",maxlen);
    printf("Line:%s\n",longest);
}
return 0;

}

int get_line(char line[],int lim)
{
    int c,i;

    
    for (i = 0; (c = getchar()) != EOF && c != '\n' && i < lim -1; ++i)
    {
        line[i] = c;
        
        
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i; 
}

void copy(char to[],char from[],int maxlen)
{
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0' )// the expression will copy characters until it hits the null terminator
        if (i < maxlen - 1) // ensure we do not exceed the maximum length
             ++i;

 
}