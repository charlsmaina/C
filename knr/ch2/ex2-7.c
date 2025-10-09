/*
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
  pseudocode
1. Extract the bits of intrest.
    How: Create a mask that has 1s at positions of interest and 0's elsewhere and & with x
2. Flip the mask to clear x values at those positions
3. Flip the bits of intrest with a not operation
4. Insert the bits to their corresponding positions

*/

#include <stdio.h>

int invert(int unsigned x, int p, int n);
int main()
{
  printf("New x: %d\n", invert(111, 6, 4));
  return 0;
}
int invert(int unsigned x, int p, int n)
{
  int x_mask = (((1 << n) - 1) << (p - n + 1));

  int bitsOfInterest = ((x & x_mask));

  int flipped_bits = (~(bitsOfInterest)&x_mask);

  int clear_xbits = x & ~x_mask;

  return (clear_xbits | flipped_bits);
}
