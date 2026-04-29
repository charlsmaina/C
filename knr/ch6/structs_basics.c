
#include <stdio.h>
int main()
{
    struct point
    {
        int x;
        int y;
    };

    struct point pt;
    pt.x = 23;
    pt.y = 21;

    printf("X cordinate: %d\nY coordinate: %d\n", pt.x, pt.y);
}