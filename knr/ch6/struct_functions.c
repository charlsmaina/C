/* Structures can be passed to funtions, functions can return structures, pointers can point to structures*/
#include <stdio.h>
#define max(a, b) ((a > b) ? (a) : (b));
#define min(a, b) ((a < b) ? (a) : (b));

/*Functions returning structures*/
struct point
{
    int x;
    int y;
};
struct rect
{
    struct point p1;
    struct point p2;
};

struct point
makepoint(int x, int y);

struct rect canonical_rectange(struct point origin, struct point max_point);

int main()
{
    struct point origin;
    struct point max_point;
    struct point midpoint;
    struct rect screen;

    origin = makepoint(0, 0);
    max_point = makepoint(16, 8);

    midpoint = makepoint((origin.x + max_point.x) / 2, (origin.y + max_point.y) / 2);

    screen.p1 = origin;
    screen.p2 = max_point;

    printf("Origin coordinates:(%d,%d)\n", origin.x, origin.y);
    printf("Maximum coordinates:(%d,%d)\n", max_point.x, max_point.y);
    printf("Centre of rectangle coordinates:(%d,%d)\n", midpoint.x, midpoint.y);

    printf("Origin coordinates:(%d,%d)\n", screen.p1.x, screen.p1.y);
    printf("Maximum coordinates:(%d,%d)\n", screen.p2.x, screen.p2.y);
}

struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
