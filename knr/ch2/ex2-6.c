/*
Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.

pseudocode:
    1. So its like you are picking bits in certain positions of a number x and then placing them in the number y right most bits
    2. Extract the bits in x that you want to place in y
        -Right shift the bits to right most positions of x
        - Mask off the extra unwanted bits that were on the left of our most right bit of interest
            - have all bits to be ones
            - left shift it in a magnitude corrsponding to the number of bits we are interested in
    3. Then place the left bits of y that are to the left after n first bits to x
        - Using or

*/

#include <stdio.h>

int setbits(unsigned int x,int p,int n,unsigned int y);
int main()
{
    int b;
     b = setbits(123,6,3,77);
     printf("X = %d\n",b);
     return 0;
}

int setbits(unsigned int x,int p,int n,unsigned int y)


{  
   int  bits_of_interest = ( y >> (p + 1 - n)) & ~( ~0 << n);

   printf("Bits of interest:%d\n",bits_of_interest);

   int unsigned x_cleared = (x & ~((1 << n) - 1));

   return (x_cleared | bits_of_interest);

      
   
    

}