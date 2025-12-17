

/* This program is an implementation of the reverse polish notation calculator
 - What is reverse polish notation calculator ? One that does operations in a succesive manner and outputs the answer after each operation.
 - In this case the way the operands and the operators are specified is abit odd .. ie a + b , is denoted as a b +
 ---------------------------------------------pseudocode-------------------------------------

 - In main() -switch controls operations - if its a number - push , if its  an operator - pop the two numbers  - perform the operation and then push


*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100 // depth of the val stack
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int sp = 0; // next free stack position
double val[MAXVAL];

int getop(char[]); // gets the next character or numeric operand
int getch(void);
void ungetch(int);

double pop(void);
void push(double);

int main(void)
{
    int type;
    int op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(s));

            break;
        case '+':
            push(pop() + pop());
            printf("Plus operation\n");
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
            if (op2 != 0)
                push(pop() / op2);
            else
                printf("Error:Division by zero");
            break;

        case '\n':
            printf("Result:%f\n", pop());
            break;

        default:
            printf("Unknown command :%s\n", s);
            break;
        }
    }
    return 0;
}

double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    }
    else
        printf("Stack empty:\n");
    return 0.0;
}

void push(double f)
{
    if (sp < MAXVAL)
    {
        val[sp++] = f;
    }
    else
        printf("Error: Stack full, can't push %f\n", f);
}

int getop(char s[])
{
    /*Get next character or numeric operand*/
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0'; /* For purposes of printing the undesired char in main*/
    if (!isdigit(c) && c != '.')
    {
        return c; /* Not a number */
    }
    i = 0;
    if (isdigit(c))
    {
        /* colllect interger part */
        while (isdigit(s[++i] = c = getch()))
            ;
    }
    if (c == '.') /*Collect fractional part*/
    {
        while (isdigit(s[++i] = c = getch()))
            ;
    }
    s[i] = '\0';
    if (c == EOF)
    {
        ungetch(c);
    }
    return NUMBER;
}

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
    if (bufp >= BUFSIZ)
    {
        printf("Ungetch: too many characters");
    }
    else
        buf[bufp++] = c;
}
