//a program to count lines 

#include <stdio.h>

int main ()
{
    int c,lc;
    lc = 0;
    while((c = getchar()) != EOF)
    {
        if (c == '\n')   //it ha to be '\n' and not "\n" 
        ++lc;
    }
    printf("Line count:%d\n",lc);
}