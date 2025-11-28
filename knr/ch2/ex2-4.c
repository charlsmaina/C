/*
Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.

pseudocode:
    1. Each time you scan a letter in s1, we transverse s2 and check if we have that character in s2 and only append it if it is not there: scan a certain string and check if that letter apperas in that lette

*/

#include <stdio.h>
#define LIMIT 100

enum in_S2 // enumeration - a variable - do i use in_S2 or i have to create another variable which can now take the values of the enum content ??
{
  NO,
  YES
}; // 0,1

void squeze(char s1[], char s2[], char s3[]);
int ge_line(char s[], int lim);

int main()
{
  char s1[LIMIT];
  char s2[LIMIT];
  char s3[LIMIT];

  int lens1, lens2;
  while ((lens1 = ge_line(s1, LIMIT)) > 0 && (lens2 = ge_line(s2, LIMIT)) > 0)
  {
    printf("string 1:%s", s1);
    printf("String 2:%s", s2);

    squeze(s1, s2, s3);
  }
}

int ge_line(char s[], int lim)
{
  int c;
  int i;
  for (i = 0; i < lim - 2 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }

  if (c == '\n')
  {
    s[i] = c;
    i++;
  }
  s[i] = '\0';

  return i;
}

void squeze(char s1[], char s2[], char s3[])
{

  int inS2 = NO;
  int k = 0;

  for (int i = 0; s1[i] != '\0'; i++)
  {
    inS2 = NO;

    for (int j = 0; s2[j] != '\0' && inS2 == NO; j++)
    {
      if (s1[i] == s2[j])
      {
        inS2 = YES;
        break;
      }
    }
    if (inS2 == NO)
    {
      s3[k] = s1[i];
      k++;
    }

    s3[k] = '\0';
  }

  printf("Parsed string:%s\n", s3);
}
