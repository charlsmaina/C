// A program to print the number of digits,white space characters and other characters in an input stream
#include <stdio.h>
int main ()
{
    int whitespace,other,c,i;
    int digits[10] ;
    whitespace = other = 0;
    for ( i = 0; i < 10; i++)
        digits[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if ('0' <= c && c <= '9')
         ++digits[c - '0'];

         else if (c == '\t' || c == '\b' || c == ' ')
            ++whitespace;
        else
            ++other;
         
    }

    printf("Digit:\tocuurence:\n");
    for (int  a = 0; a < 10; a++)
            printf("%d\t%d\n",a,digits[a]);

    printf("Whitespaces:%d\nOther:%d\n",whitespace,other);
    
    


       
    
    
    
    
    



    
}