//a program to compute the power  of a given base for a given interger i

#include <stdio.h>
int power (int base,int n);

int main ()
{
    int i;
    printf("i\tPowers of 2:\t Powers of 3\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\t%4d\t\t%5d\n",i,power(2,i),power(3,i)); 
    }
    

 
 return 0;
 
}

int power (int base,int n)
{
    int i;
    int p = 1 ;
    for ( i = 1; i <= n; i++)
    {
        p = p * base ;
    }
    return p;
    

}