

/* This program is an implementation of the reverse polish notation calculator
 - What is reverse polish notation calculator ? One that does operations in a succesive manner and outputs the answer after each operation.In a nut shell: operands precede operators. Like 23- means 2-3... and so on
 - In this case the way the operands and the operators are specified is abit odd .. ie a + b , is denoted as a b +
 ---------------------------------------------pseudocode-------------------------------------

 - In main() -switch controls operations - if its a number - push , if its  an operator - pop the two numbers  - perform the operation and then push
 - So we need a function to get the operators and operands. And them implement push and pop functions


*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUMBER '0'    // this is a flag to use in switch to indentify that getop has found a number
#define MAXOP 100     // maximum size of the array used to fetch the operator and the operands
#define BUFSIZE 100   // size of the buffer to store unwanted pushed back character
#define STACKSIZE 100 // size of our stack

void push(double);
double pop(void);
int get_op(char string[]);
int getch(void);
void ungetch(int c);

int main()
{
    int type;   // this is the variable used in the switch condition
    double op2; // temporary storage of variables incase we have non- commutative operations
    char string[MAXOP];

    while ((type = get_op(string)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(string));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
            {
                push(pop() / op2);
            }
            else
            {
                printf("Error -> Division with zero:\n");
            }
            break;
        case '\n':
            printf("Result: %f\n", pop());
            break;

        default:
            printf("Unknown command: %s :\n", string);
            break;
        }
    }

    return 0;
}

int top_stack = 0;
double stack[STACKSIZE];

void push(double s)
{
    if (top_stack < STACKSIZE)
    {
        stack[top_stack++] = s;
        printf("Pushed %f\n", s);
    }
    else
        printf("Error -> Cannot push:Stack is full:\n");
}

double pop(void)
{
    if (top_stack > 0)
    {
        return stack[--top_stack];
    }
    else
    {
        printf("Error: no more elements to pop\n");
        return 0.0;
    }
}

// get_op implementation
int get_op(char string[])
{
    int c, i;
    while ((string[0] = c = getch()) == ' ' || c == '\t')
        ;             // ignore whitspace
    string[1] = '\0'; // required to have a proper string termination incase only a single character is read.
    if (!isdigit(c) && c != '.')
        return c; // not a number
    i = 0;
    if (isdigit(c))
    {
        while (isdigit(string[++i] = c = getch())) // collect the number
            ;
        if (c == '.')
        {
            while (isdigit(string[++i] = c = getch()))
                ;
        }
        string[i] = '\0';

        if (c != EOF)
        {
            ungetch(c);
        }

        return NUMBER;
    }
}

int buf_index = 0;
char buf[BUFSIZE];

int getch(void)
{
    return (buf_index > 0) ? buf[--buf_index] : getchar();
}
void ungetch(int c)
{

    if (buf_index >= BUFSIZE)
    {
        printf("Ungetch: too many characters\n");
    }
    else
    {
        buf[buf_index++] = c;
    }
}
