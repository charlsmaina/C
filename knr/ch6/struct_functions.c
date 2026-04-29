/* Structures can be passed to funtions, functions can return structures, pointers can point to structures*/
#include <stdio.h>

/*Functions returning structures*/
struct point
{
    int x;
    int y;
};
struct point makepoint(int x, int y);

int main()
{
    struct point origin;
    origin = makepoint(0, 0);
    printf("Origin coordinates:(%d,%d)\n", origin.x, origin.y);
}

struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}