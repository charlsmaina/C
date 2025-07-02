#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF) //read character from keyboard and store it in variable c and then check if its a valid end of file
        putchar(c);  // print the character on the screen
    return 0;
}