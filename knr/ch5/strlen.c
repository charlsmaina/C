
/*
----------------------Problem statement---------------------------------------
 Create a function that counts the length of a string using a pointer as its argument
-----------------------pseudocode-------------------------------------------
Create a function named str_len, then initialize a counter n and increment it as the pointer dos not oint to null terminator

*/

#include <stdio.h>
int str_len(char *pc);

int main()
{
    char string[] = "MAINA";
    printf("Length of %s is %d\n", string, str_len(string));
    char *ptc;

    ptc = string + 2;
    printf("Second letter of %s is %c\n", string, *(ptc - 1));
}

int str_len(char *pc)
{
    int n;
    for (n = 0; *(pc++) != '\0'; n++) /*You check for the value itself*/
        ;
    return n;
}