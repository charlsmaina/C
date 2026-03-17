#include <stdlib.h>
#include <stdio.h>
int main()
{
    char name[] = "charlesm";
    printf("Name = %s \n", name);

    unsigned char *ptr = (unsigned char *)name;
    for (int i = 0; i < 15; i++)
    {
        printf("name[%d] = %d (%c)\n", i, ptr[i], ptr[i]);
    }

    /* Basically - in array  size specification - consider the null operator as part of the array

    - Good practices:
        - If you are initializing with known values, let compiler decide the size
        - If you are creating a buffer, specify size explicitly
    */

    char address[] = "-1234.5";
    printf("Address is %f\n", atof(address));
    int y;
    printf("C = %d\n", y);
}