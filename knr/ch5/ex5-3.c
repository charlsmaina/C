/*
Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2:
strcat(s,t) copies the string t to the end of s.

{Chapter two version assumed that s had enough space to accommodate s...so it just checked for the  end of string s and then started copying t to s: used '\0  to check for boundaries}

---------------------problem statement----------------------
#   So if space is not guaranteed...ie if s has no space to accommodate t. What do i do,,, do i just overwrite in memory? One option is to have a buffer to hold both strings and return a pointer to the beginning of the string that i just copied. To know how much space to allocate. First check for the length of each string. And allocate total length plus 1.
--------------------pseudocode-------------------------
- make s a pointer and increment it until it points to '\0', then assign t to s up to new line


*/

#include <stdio.h>
#define BUFFER 150

char *strcat(char *s, char *t);
static char copying_buffer[BUFFER];
static char *buf_p;
int bufindex;
char *alloc(int n);

int main()
{
    char *rp;
    char *name = "Charles";
    char *sur_name = "Kinyua";
    rp = strcat(name, sur_name);
    while (*rp != '\0')
    {
        putchar(*rp);
        rp++;
    }
}

char *strcat(char *s, char *t)
{
    int n;
    char *alloc_p;
    n = 0;
    while (*s != '\0' || *t != '\0')
    {
        s++;
        t++;
        n++;
    }
    n--;

    alloc_p = alloc(n);
    s -= (n - 1);
    t -= (n - 1);
    while (*s = copying_buffer[bufindex++] != '\0')
        s++;
    while (*t = copying_buffer[bufindex++] != '\0')
        t++;
    return alloc_p;
}

char *alloc(int n)
{
    if ((copying_buffer + BUFFER - buf_p) >= n)
    {
        buf_p += n;
        return buf_p - n;
    }
    else
        printf("Error: Buffer full\n");
}