#include <stdio.h>
int main()
{
    char *name = "CHARLES";
    char *sur_name = "MAINA";

    name = &sur_name;
    printf("First letter for surname:%c\n", *name);
}