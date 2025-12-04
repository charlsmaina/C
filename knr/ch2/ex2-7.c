/*
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
  pseudocode
1. Extract the bits of interest.
    How: Create a mask that has 1s at positions of interest and 0's elsewhere and & with x
2. Flip the mask to clear x values at those positions
3. Flip the bits of intrest with a not operation
4. Insert the bits to their corresponding positions

*/

#include <stdio.h>
#define BYTE 8

int invert(int unsigned x, int p, int n);
void dec_bin(int x, int byte[]);
int byte[BYTE] = {0};

int main()
{
  int result;
  result = invert(111, 6, 4);

  printf("New x after fliiping bits:\n");
  dec_bin(result, byte);
  return 0;
}

int invert(int unsigned x, int p, int n)
{
  printf("Value of x:\n");

  dec_bin(x, byte);
  int cleared_x;
  cleared_x = x & ~(~(~0 << n) << (p - n + 1));

  printf("Value of cleared value of x:\n");
  dec_bin(cleared_x, byte);

  return cleared_x | (~(x & ~(~0 << n) << (p - n + 1)) & ~(~0 << n) << (p - n + 1));

  /*
  This is the main function  and where everything depends:
  -----This is the logic ---------

  - cleared x sets the positions that contain bits to be cleared to 0
  - (~0 << n) creates a mask that looks like : 11110000
  - ~(~0 << n) - flips this mask to 00001111
  -  creates a mask with ones at the bit positions to be flipped nd zero else where
  - ~(~(0 << n) << (p -n + 1)) flips that mask
  - x & ~(0 << n) << (p -n + 1) places zeros in the bit positions we want to flip

  */
}

void dec_bin(int x, int byte[])
{
  printf("Decimal: %d\n", x);

  for (int i = (BYTE - 1); i >= 0; i--)
  {
    byte[i] = x % 2;
    x = x / 2;
  }
  printf("Binary:");

  for (int i = 0; i < BYTE; i++)
  {
    printf("%d", byte[i]);
  }
  printf("\n");
}
