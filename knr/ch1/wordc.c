//a program that counts the number of characters,words,and lines from an input stream

#include <stdio.h>
#define IN 1
#define OUT 0

int main ()
{
    int c,wc,cc,lc,state;
    wc = cc = lc = 0 ;
    state = OUT ;

    while ((c = getchar()) != EOF)
    {
            
            ++cc;
        if (c == '\n')
        ++lc;

        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT)
        {
            ++wc;
            state = IN;
        }
        
      
    }
    printf("Character count:%d\nLine count:%d\nWord count:%d\n",cc,lc,wc);
    
}