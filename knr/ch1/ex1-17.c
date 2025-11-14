// Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
// pseudo code
/*

    ################################################################################################################################################################33
    #
    #--------------------------------------------suciint pseudocode------------------------------------------
    # - Amore succint code is to check the return value of linesget and then print those greater than 80
    #
    #################################################################################################################################################################

*/

#include <stdio.h>
#define LIMIT 1000 // limit of characters in an array
#define MIN 80

int linesget(char lines[], int lim); // function defination  - read a line and return its length

int main()
{
    char lines[LIMIT]; // an array to store a line as its read

    int len, i;

    while ((len = linesget(lines, LIMIT)) > 0) // read a line and get its length
    {
        if (len > MIN) // eliminate lines less than min
            printf("%s", lines);
    }
}

int linesget(char lines[], int lim)
{
    int c;
    int i;
    int j;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        if (i < lim - 2)
        {
            lines[j] = c;
            j++;
        }
    }
    if (c == '\n')
    {
        lines[j] = '\n';
        j++;
        i++;
    }

    lines[j] = '\0';
    return i;
}

/*
THE MAIN TAKE AWAYS FROM THIS EXERCISE:
    - Function defination - You have to make sure you defination does not coincide with the C reserved keywords. Ealier i had used getline as the function name for the function to read the lines and it took time before i realized what the error meant. Sometimes it takes times to interpret the error messages especilly for beginners.

    - Passing arrays as arguments to functions - You pass the array name
    - Array indexing is very crucial





*/