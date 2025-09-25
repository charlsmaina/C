

  #  Chapter 2 
  ## Types, Operators and expressions

  -Declaration states what variables are to be used,what type they are and  may be what are their initial values
  -Operators - What is to be done to variables
  -Expressions - combine variables and constants through operationns to produce new values
  -The type of an object determines what values it can have and the set of operations that can be performed unto it

  # Basic data types in C
   1.char -capable of holding a single character in the local character set
   2.int  - Holds an interger whose size depends on the natural size of an interger in the host machine
   3. float -A single precision floating point
   4. double - A double precision floating point

   # Qualifiers used in data types
    - Short and long for int - used typically to extend the size of int where practical
    - short -typically 16 bits [int is typically around 32 bits or 16 bits- short is ] - short can't be longer than int
    -long [ has to be atleast 32 bits -cannot be shorter than int]

    - Signed or unsigned - applicable to both int and char
    -Unsigned numbers  - are either positive or zero
    -Long double - represents extended precision floating point

    -The size of this symbolic constants are contained in the header files <limits.h> and <float.h>
    -The sizes of the various dat types sizes are spsecified in the <limit.h>
    -ul -unsigned long
    -A character constant is an interger written as a character within single quotes


```
      -segmentation fault is an error that ocuurs when your computer tries to access memory it is not allowed to access
      -Example - i tried to create a a character arrar of size 1000000 in the main - main is allocated a few MBs 
```
- '\000' - used to represent an arbitrary octal number
- '\xhh  -Reps an abitrary hexadecimal number -hh is the hexadecimal number
# Complete set of escape characters 
      -\n - new line
      -\t -horizontal tab
      -\v -vertical tab
      -\' -single quote
      -\" -double quotes
      -\r -carriage return
      -\a -alarm bell
      -\b -backspace
      -\f -formfeed
      -'\000 -octal number
      -'\xhh -hexadecimal number
      -\\ -backslash
      -\? question mark
      -'\0' -has a valuse of 0
-COnstant expression - an expression that involves only constants

-A string constant or literal is a sequence of zero or more characters surrounded by double quotes
-Enumeration constant - a list of constant integer values
-If not all values are specified, unspecified values continuethe proression from the last specified value.ie...if you only specified the first value to be 1, the second value will be 2 , the third will be 3 and so forth.First value is 0, then 1 then 2, unless explicit values are supplied
-Example : enum boolean (NO, YES)
-Enum are a convinient way to associate constant values with names - similar to define except that in enum, the values can be generated for you
-Enum variables may be declared  - offering a mechanism to check if what is stored is valid/may or may not check

# Declaration -specifies type - a variable can be initialized in its declaration
-External and sttic variables are initilized to zero by default
Automatic variables for which is no explicit initializer have undefined(garbage values
)

-const qualifier specifies that the particular value of a variable is not to change
ie: const char msg[] = "warning"
-You can also use const when passing an array as an argument to a function to show that the function is not changing the contents f that array
ie. int strlen (const char [])

# ARITHMETIC OPERATORS
Integer division truncates any fractional part
- % modulus operator: -produces the remaider when a number is divided with another = 0 for even divided by 2
- Ie A year is leap if it is divisible by 4 and not 100 except that ears divisible b 400
+-/*%:
# Relational and logical operators:
Relational operators: > >= <  <= : alll have the same precedence
Below them in precedence are : == !=
Relational operators have lower precedence than arithmetic operators
Logical operators: || && : evaluated from left to right and evaluation stops as the truth or falsehood od the result is known

-&& has higher precedence than || and both are lower in precedence than equality and relational operators.
-!= has higher precedence than =
- ! =unary negation operator -Converts a non-zero operand to 0 and a zero operand to 0
  -<ctype.h> - provides set of functions that provide tests and strings conversions indepedent of the character set

  -Whether char is signed or unsigned is machine / compiler/ architecture dependent
  -For portability and to escape the umbinguity of char in differnt machines[whether signed or unsigned] specify signed or unsigned if non character data is to be stored in char variables

-in implicit arithmetic conversions -the lower operand is converted to the 'higher one' before the operation proceeds.
-Float are not automatically converted to double - saves space and also save time - double-precision arithmetic is expensive
-**
   ~~~ Conversions are more difficult when unsigned operand are involved.??

   Conversion rules are more complicated when unsigned operands are involved. The problem
is that comparisons between signed and unsigned values are machine-dependent, because they
depend on the sizes of the various integer types. For example, suppose that int is 16 bits and
long is 32 bits. Then -1L < 1U, because 1U, which is an unsigned int, is promoted to a
signed long. But -1L > 1UL because -1L is promoted to unsigned long and thus appears
to be a large positive number. 



-When a float is converted into a double - whether the value is rounded off or truncated is implementation dependent.
-Type conversion also takes place when a function is called and arguments are passed to it.In the absence of a function prototype - char and short become float while float becomes double.

##
 

