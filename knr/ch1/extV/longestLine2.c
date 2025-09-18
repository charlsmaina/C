//This is a revision of the longest line program where some variables are defined as external and functios have no arguments:

#include <stdio.h>
#define MAXLINE 150
 
char line[MAXLINE]; //this is defination : The variable is created and assigned storage
char longest[MAXLINE];
int maxl;

int lineget(void);
void copy(void);

int main()
{
    int len;
    extern int maxl;   //this extern is redudndant : when you define the external variable before its use using extern is redundant unless you are using it across multiple files.

    extern char longest[]; // This is declaration :The nature of the variable is stated  but no storage is allocated

    maxl = 0;
    while ((len = lineget()) > 0)
    {
        if (len > maxl)
        {
            maxl = len;
            copy();

        }
        
          }
          if (maxl > 0)
            printf("%s",longest);
    
}

int lineget(void)
{
    int c,i;
    extern char line[];

   for (i = 0 ; i < MAXLINE - 2 && (c = getchar()) != EOF && c != '\n' ; i++)
   {
    line[i] = c;

   }
   if (c == '\n')
   {
    line[i] = c;
    i++;
   }
   line[i] = '\0';
   return i;
   
}

void copy(void)
{
    int i;
    i = 0;
    extern char line[];    //this is an external variable - its accessible anywhere and it retains its original values
    extern char longest[];

    while ((longest[i] = line[i]) != '\0')
    i++;
    
}

// External variables tend to make connectons between data and functions hard to trace and can lead to to weak programs
/*
    
Relying too heavily on external variables is fraught with peril since it leads to programs
whose data connections are not all obvious - variables can be changed in unexpected and even
inadvertent ways, and the program is hard to modify.
*/
