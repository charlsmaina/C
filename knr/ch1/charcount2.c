//using a for loop to count characters

#include <stdio.h>
int main()
{
    long int wc;

    for (wc = 0;getchar() != EOF; ++wc)
    ;
    printf("%ld\n",wc);
    

}