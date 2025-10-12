// This is a program to count the number of wors, characters and lines from an inut stream

#include <stdio.h>
enum
{
    NO, // reps 0
    YES // reps 1
};
int main()
{
    int new_word; // tracks if we are inside or outside of a word
    int c, lines, words, chars, prev_char;
    lines = words = chars = 0;

    prev_char = '\t'; // this is for ignoring consequtive leading spaces:

    new_word = NO; // We start outside a word: Meaning we only increment words when we see a word or a tab or a space

    while ((c = getchar()) != EOF)
    {
        chars++;
        if (c == '\n')
            lines++;
        if ((c == '\n' || c == '\t' || c == ' ') && (c == '\n' || (prev_char != ' ' && prev_char != '\t')))

            /* This logic checks for words: first bracket is obvious: for the bracket after
               the && . ..i have found another bug here, i intended {c == '\n' to allow the first empty line
               with a newline to be recongonized as a word}

               * But on the contrary, if we have a case where we have a space before a newline: since  had used OR, it means nothing else is checked and this may count the newline as an extra word which is not the case. Thats a bug that i need to fix.

            */
            new_word = YES;

        if (new_word == YES)
        {
            words++;
            new_word = NO;
        }
        prev_char = c;
    }

    printf("Characters:%i\nLines:%i\nWords:%i\n", chars, lines, words);
    return 0;
}