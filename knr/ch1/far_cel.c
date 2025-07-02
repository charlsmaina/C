#include <stdio.h>

/*
Print fahrenheit - celcius table 
*/

int main()
{
    float fahr,celcius;
    float min,max,step;

    min = 0;
    max = 300;
    step = 1;

    fahr = min ;
    printf("Farenheit\tCelcius\n");

    while (fahr <= max)
    {
        celcius = (5.0/9.0) * (fahr - 32.0 );

        printf("%3.0f\t\t%4.2f\n",fahr,celcius);
        fahr = fahr + step;
        
    }
    return 0;
}