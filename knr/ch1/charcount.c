// A program to count the number of characters entered by a user

#include <stdio.h>
int main ()
{
   long int wc;
    wc = 0;
    while (getchar() != EOF)
    
          ++wc;
    
    printf("%ld\n",wc);
    

    }
    //To echo the EOF character - use control D {For Ubuntu}
    //results have your entered characters plus one due to the automatic appending of newline on pressing Enter
    