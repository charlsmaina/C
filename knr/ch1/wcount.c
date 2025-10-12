// This is a program to count the number of wors, characters and lines from an inut stream

#include <stdio.h>
enum
{
    NO,
    YES
};
int main()
{
    int new_word;
    int c, lines, words, chars;
    lines = words = chars = 0;

    new_word = YES;

    while ((c = getchar()) != EOF)
    {
        chars++;
        if (c == '\n')
            lines++;
        if ((c == ' ' || c == '\t') && words != 0)
            new_word = YES;

        if (new_word == YES)
        {
            words++;
            new_word = NO;
        }
    }

    printf("Characters:%i\nLines:%i\nWords:%i\n", chars, lines, words);
    return 0;
}