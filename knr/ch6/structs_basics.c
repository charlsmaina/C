
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

    struct rect
    {
        struct
        {
            int x;
            int y;
        } p1;
        struct
        {
            int x;
            int y;
        } p2;
    };
    struct rect screen;
    screen.p1.x = 14;
    screen.p1.y = 24;

    printf("Top right cordinates of screen\nX coordinate: %d\nY coordinate: %d\n", screen.p1.x, screen.p1.y);
}