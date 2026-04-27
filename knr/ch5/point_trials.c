#include <stdio.h>
#include <stddef.h>
int main()
{
    char *name = "CHARLES ";
    char *sur_name = "MAINA";

    char nick_name[] = "CHARO";

    printf("First letter for surname:%c\n", *name);
    printf("Second letter of surname:%c\n", name[1]); /*You can index a pointer*/
    printf("Hello, \n");
    while (*name != ' ')
    {
        putchar(*name);
        name++;
    }
    putchar('\n');
    printf("Niajy ");
    char *nick_name_ptr = nick_name;
    while (*nick_name_ptr != '\0')
    {
        putchar(*nick_name_ptr);
        nick_name_ptr++;
    }
    putchar('\n');
}