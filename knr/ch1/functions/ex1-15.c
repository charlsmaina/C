/*
Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.
*/

#include <stdio.h>
float deg_fahr(int);
float fahr_deg(int);

int main ()

{
int i;
printf("\nFahrenheit to degree conversion:\n\nFahrenheit\tDegrees\n");
for (i = 0;i <= 100; i = i + 2)
{
    printf("%d\t\t%f\n",i,fahr_deg(i));
}

printf("\nDegree to fahrenheit conversion:\n\nDegreees\tFahrenheit\n");
for (i = 0;i <= 100; i = i + 2)
{
    printf("%d\t\t%f\n",i,deg_fahr(i));
}
}

float fahr_deg(int i)
{
    return ((5.0/9.0) * (i - 32));
}

float deg_fahr(int i)
{
    return ((9.0/5.0) * i + 32);
}
