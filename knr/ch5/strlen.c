
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
    char string[] = "Kinyua";
    printf("Length of %s is %d\n", string, str_len(string));
}

int str_len(char *pc)
{
    int n;
    for (n = 0; *(pc++) != '\0'; n++)
        ;
    return n;
}