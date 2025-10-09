/*
A program to print the conversion table(Farenheit to degrees celcius) in reverse:starting from 300 to 0
*/
#include <stdio.h>
int main()
#define UPPER 300
#define LOWER 0
#define STEP 20

{

    int fahr;
    printf("Farenheit degrees\tDegree Celcius\n");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%d\t\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    return 0;
}