/*
Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.
Pseudocode:
    1. Replace some n bits in x with the rigtmost bits in y
    2. How
        1. Extract the rightmost bits of y
            How: create a mask with 1s at the rightmost bits of interest and 0's in other bit positions and & with y
        2. Position the bits of interest to positions that coincide with positions they are to replace in x
            How: Shift left the bits of interest by a magnitude equal to the position the lowest position bit position of intrest {positions to be left on the right}
        3.Set a mask to clear the positions in x that are to be replaced by rightmost bits in y
        4. Clear the positions
        5. Insert the bits and return the value
*/

#include <stdio.h>

int setbits(int unsigned x,int p,int n,int unsigned y);

int main()
{
    printf("New x:%d\n",setbits(150,6,4,113));
    return 0;

}
int setbits(int unsigned x,int p,int n,int unsigned y)
{
    int y_rightMostBits = y & ((1 << n) -1);
    int righrMostBits_mask = y_rightMostBits << (p - n +1);

   int  x_bitsClear = ~(((1 << n) - 1) << (p - n + 1));
   x = x & x_bitsClear;

   return (x | righrMostBits_mask);

}