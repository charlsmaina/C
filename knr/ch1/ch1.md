# Introduction

- Any C _program_ however its size consists of :

1. Functions - Specify the statements used to do the computation

2. Variables - Store values used in computation

`#include <stdio.h>` -Tells the compiler to include information about the stardard c input/output library

- A character string or string constant - A sequence of characters enclosed by double quotes. It is simply an array terminated with the null terminator ('\0).

- Different data types have differnt sizes

1.  Int -depends on size of machine -may be two bytes

2.  Char- a single byte

3.  Float - has decimal part

4.  Double - Double precision floating point number 4. Long int 5. Short int

- Whenever a given value exceeds its given variable trype size -we have overflow

- In C integer division truncates - fractional part is discarded

- If an arithmetic operation has integer operands ,an interger opertion is performed

- If its an interger and floating point operands - integer is first converted to a float and floating point operation is performed

Format specifiers include:

1. %d = decimal

2. %x = hexadecimal

3. %o = octal

4. %s = string

5. %c = character

- Symbolic constants are used to designate values that are of significant importance so that we can give the values meaning

- Use the define keyword, then the symbolic constant name,then the symbolic constant value

### Character input and output

The stardard c library treats both input and output on a per character basis
two basic functions are used :

1.  getchar() = reads a character from an input stream;returns an EOF when there is no real character found - stores the ASCII value of the character

- Example : ` c = getchar();` - A character entered at the terminal is stored in c. Its ascii value is stored in c

2.  putchar(c) - prints the ASCII interger value c as a character

- The else is executed automatically if no else if or if condition that evaluates to be true

### Arrays

- index starts from 0

- In any character set the sequence 0-9 is consequtive,so we can get the numerical value of a character read as input by.<br> finding the differnce between that character and zero ('0')

- To pass an array as an argument in a function: - you just pass its name- what the function sees is the address of the first element in that array

### Functions

- It is a way to encapsulate some computation which facilitates later usage without worrying about the implementations of the computation.

- It is a way of abstracting.

- Abstraction brings about convinience. Think of it like this. Your sterring wheel is a intuitive example of how abstraction works. You give inputs in form of<br>
  rotations, these rotations go though some abstracted layers for you to have the desired rotation of the wheels. In life , there are alot of functions that abstract<br>
  things for convinience
- Things to keep in mind when it comes to functions:

  - Function prototype<br> This specifies the return type of the function, the function name, and the function parameters together with their types. It is not mandatory to provide the parameter names but it is a capital M must for you to provide the name of the parameter types.
  - Function defination <br> The function prototype signature must match the defination signature in terms of the return type and the parameters types and obviously the function name

  - Prior ANSI standard <br> Defination and declaration (prototype) were very differnt in that you did not have to specify the function parameter types in the function prototype. Functions with no specified return type were assigned to return an int by default. <br>
    In the defination the parameter names were declrared before opening the left parenthesis.

### Call by value

- This is a mechanism of passing the argument values to a function where the<br> the argument values are passed in temporary variables and not the originals

- The funtion does not manipulate or alter the originals but works with the <br>temporary variables

### Call by reference

- The original varibles are passed to the function by pasing a refence to their <br> storage lacation. pointers are used in this case

### External variabls and scope:

- Variables defined in main are local to main -That means no other function can have a direct access to them

- Local variable comes into existence when the function is called and dissapears once the function is exited - thats why they are called automatic variables

- In static storage class - Local variables retain their values between calls. It is a way <br> to ensure local variables are not reintialized everytime a function is called which might be useful in some cases.

- External variables are the alternative of local or automatic variables. They can be called and accessed by any function in the program. They retain their values even when the caller has returned its value. they can be used in functions as arguments instead of passing argument lists

- Extern keyword is used in external variables to make them accessible to other files belonging to the same program. This is for cases where you have a program spanning multiple files

- External variables must be defined outside of any function and must be declared explicitely inside each function that wants to access it
