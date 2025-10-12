#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int state, nl, nw, nc, c;
    nl = nw = nc = 0;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;

        if (c == '\n' || c == ' ' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("Characters:%d\nWords:%d\nLines:%d\n", nc, nw, nl);
    return 0;
}