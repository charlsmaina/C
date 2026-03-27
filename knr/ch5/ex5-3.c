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

char *my_strcat(char *s, char *t);
static char copying_buffer[BUFFER];
static char *buf_p = copying_buffer;

char *alloc(int n);

int main()
{
    char *rp;
    char *name = "Charles";
    char *sur_name = "Kinyua";
    rp = my_strcat(name, sur_name);
    while (*rp != '\0')
    {
        putchar(*rp++);
    }
    putchar('\n');
}

char *my_strcat(char *s, char *t)
{
    int s_len;
    int t_len;
    char *start;
    char *temp_s;
    char *temp_t;

    temp_s = s;
    temp_t = t;

    char *alloc_p;
    s_len = 0;
    t_len = 0;

    while (*temp_s++)
    {

        s_len++;
    }

    while (*temp_t++)
    {

        t_len++;
    }

    alloc_p = alloc(s_len + t_len + 1);
    start = alloc_p;

    while ((*alloc_p++ = *s++) != '\0')
        ;
    alloc_p--;
    while ((*alloc_p++ = *t++) != '\0')
        ;
    return start;
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