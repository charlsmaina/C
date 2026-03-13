#include <stdio.h>
#include "../headers/atof2.h"
#include "../headers/ge_tline.h"
#define MAXLINE 10

int main()
{
    char string[MAXLINE];
    float sum;
    sum = 0;
    while (ge_tline(string, MAXLINE) > 0)
    {
        printf("Cummulative sum = %f\n", sum += atof2(string));
    }
}