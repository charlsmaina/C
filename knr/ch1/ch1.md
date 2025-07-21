# Introduction

[] Any C program however its size consists of :
    1. Functions - Specify the statements used to do the computation
    2. Variables - Store values used in computation
    
#include <stdio.h> -Tells the compiler to include information about the stardard c input/output library

[] A character string or string constant - A sequence of characters enclosed by double quotes

[] Differnt data types have differnt sizes :
    1. Int -depends on size of machine -may be two bytes
    2. Char- a single byte
    3. Float - has decimal part
    3. Double - Double precision floating point number
    4. Long int 
    5. Short int

    -Whenever a given value exceeds its given variable trype size -we have overflow

[] In C interger division truncates - fractional part is discarded

[] If an arithmetic operation has interger operands ,an interger opertion is performed
[] If its an interger and floating point operands - interger is first converted to a float and floating point operation is performed


[] Format specifiers include:
    1. %d = decimal
    2. %x = hexadecimal
    3. %o = octal
    4. %s = string
    5. %c = character

[] We use symbolic constants to to designate values that are of significant importance so that we can give the values meaning
[] Use the define keyword, then the symbolic constant name,then the symbolic constant value

[[Character input and output]]
The stardard c library treats both input and output on a per character basis
two basic functions:
    1. getchar() = reads a character from an input stream;returns an EOF when there is no real character found -so int is used to be able to hold size of EOF
    2. putchar(c) - prints the content of the interger value c as a  character  

-The else is executed automatically if no else if or if condition that evaluates to be true

# Arrays
-index stards from 0
-In any character set the sequence 0-9 is consequtive,so we can get the numerical value of a character read as input by finding the differnce between that character and zero ('0')
