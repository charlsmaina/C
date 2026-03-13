

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
#define NUMBER '0' // this is a flag to use in switch to indentify that getop has found a number
#define MAXOP 100

void push(double);
double pop(void);
int get_op(char string[]);

int main()
{
    int type;
    double op2;
    char string[MAXOP];
    switch (type = get_op(string))
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
            break;
        }
        else
        {
            printf("Error -> Division with zero:\n");
            break;
        }
    case '\n':
        printf("Result: %f\n", pop());
        break;

    default:
        printf("Invalid input:\n");
        break;
    }
    return 0;
}

int top_stack;
top_stack = 0;

int max_stack;
max_stack = 20;

double stack[max_stack];
void push(double s)
{
    if (top_stack < max_stack)
    {
        stack[top_stack++] = s;
    }
    else
        printf("Error -> Cannot push:Stack is full:\n");
}

double pop(void)
{
    if (top_stack >= 0)
    {
        return stack[top_stack--];
    }
    else
    {
        printf("Error: no more elements to pop\n");
        return 0.0;
    }
}
