// This is a program to count the number of words, characters and lines from an inut stream

/*

######################################################################################################################################################
#   - Logic:
#   - The main  challenge here is couting words
#   - After multiple iterations i came up with this solution:
#   - I use enum to store values 0,1, with 0 being OUT, and 1 being IN...enums give variables values
#    automatically starting  from 0 if the values have not been explicitely stated. I could have used
#    define instead.
#   -I used a flag named state to monitor whether am inside a word or outside a word so that i can increment
#     the word count only when am transitioning to outside a word state after being inside a word with the outside word state  being informed by
#    word separators like tab, newline or space. ()
#   -The initial state is outside a word:
#   - Lets check some of the corner cases that are likely to cause bugs
#   1.Two spaces or tabs used to start a line
#       -Since all first characters are spaes and tabs, the state to IN never gets updated hence we never count that as a valid word
#   2. Two consequtive spaces separating two words: - for state to be updated to IN after word separator - next character must not be a word separator.
#########################################################################################################################################################

*/

#include <stdio.h>
enum
{
    OUT, // reps 0
    IN   // reps 1
};
int main()
{
    int state; // tracks if we are inside or outside of a word
    int c, lines, words, chars, prev_char;
    lines = words = chars = 0;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        chars++;
        if (c == '\n')
            lines++;

        if (c == ' ' || c == '\t' || c == '\n')

        {
            if (state == IN)
            {
                state = OUT;
                words++;
            }
        }

        else
            state = IN;
    }

    printf("Characters:%i\nLines:%i\nWords:%i\n", chars, lines, words);
    return 0;
}