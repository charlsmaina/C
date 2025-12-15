#include "../headers/itob.h"
#include <stdio.h>
void itob(int n, char s[], int base)
{
    int i = 0;
    int j;
    int c;
    s[i++] = '0';
    s[i] = 'X';
    for (j = 5; j > i; j--)
    {
        c = n % base;
        n = n / base;
        switch (c)
        {
        case 0:
            s[j] = '0';
            break;
        case 1:
            s[j] = '1';
            break;
        case 2:
            s[j] = '2';
            break;
        case 3:
            s[j] = '3';
            break;
        case 4:
            s[j] = '4';
            break;
        case 5:
            s[j] = '5';
            break;
        case 6:
            s[j] = '6';
            break;
        case 7:
            s[j] = '7';
            break;
        case 8:
            s[j] = '8';
            break;
        case 9:
            s[j] = '9';
            break;
        case 10:
            s[j] = 'A';
            break;
        case 11:
            s[j] = 'B';
            break;
        case 12:
            s[j] = 'C';
            break;
        case 13:
            s[j] = 'D';
            break;
        case 14:
            s[j] = 'E';
            break;
        case 15:
            s[j] = 'F';
            break;
        }
    }
    s[6] = '\0';
    printf("Hexadecimal value: %s", s);
}