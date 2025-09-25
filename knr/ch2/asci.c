//this a program to compute the ascii codes for a given input as a number

#include <stdio.h>
char line[1000000000];

int main(void)
{
    extern char line[];
    int c;
    int i;
    i = 0;
    
    while ((c = getchar()) != EOF && c != '\n' &&  i < 98)
    {
        line[i] = c;
        ++i;
    }
    
        if (c == '\n' && i < 98)
        {
        line[i] = '\n';
        ++i;
        }
        line [i] = '\0'; 
    
    for (int j = 0; j < i; ++j)
    {  
         if (line[j] != '\n' && line[j] != '\0')
        printf("The ascii code for %c is %d\n", line[j], line[j]);

    }
    
    for (int k = 0; k < i; ++k)
    {
        if (line[k] != '\n' && line[k] != '\0')
        {
           printf("%d", line[k]);
        }

    }
    printf("\n");
    return 0;
}