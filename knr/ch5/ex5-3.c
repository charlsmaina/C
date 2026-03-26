/*
Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2:
strcat(s,t) copies the string t to the end of s.
--------------------pseudocode-------------------------
- make s a pointer and increment it until it points to '\0', then assign t to s up to new line


*/

#include <stdio.h>

char *string(char *s, char *t);
int main()
{
    char *name = "Charles";
    char *sur_name = "Kinyua";

    char *cp2 = string(name, sur_name);
    printf("CP2 %c\n", *cp2);
}
char *string(char *s, char *t)
{
    int n;
    n = 0;
    while (*s != '\0')
    {
        s++;
        n++;
    }

    while ((*s = *t) != '\0')
    {
        s++;
        t++;
        n++;
    }
    return s - n;
}