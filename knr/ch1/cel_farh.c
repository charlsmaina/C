#include <stdio.h>
/*
A program to convert temperature in degree celcius to degree farenheit
*/
int main()
{
    float fahr,celcius;
    float min,max,step;
    
    min = 0;
    max =300;
    step = 20;

    celcius = min ;
    printf("Celcius\tFahrenheit");
while (fahr <= max)
{
   fahr = ((9.0/5.0) * celcius) + 32;
   printf("%2.0f\t\t%3.0f\n",celcius,fahr);
   celcius = celcius + step;

}
return 0;



}