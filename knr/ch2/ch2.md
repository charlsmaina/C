# Chapter 2

## Types, Operators and expressions

- Declaration states what variables are to be used,what type they are and may be what are their initial values

- Operators - What is to be done to variables

- Expressions - combine variables and constants through operationns to produce new values

- The type of an object determines what values it can have and the set of operations that can be performed unto it

- At least 31 characters of an internal name are significant ? what does this imply

## Basic data types in C

1. char - a single byte capable of holding a single character in the local character set

2. int - Holds an interger whose size depends on the natural size of an interger in the host machine

3. float -A single precision floating point

4. double - A double precision floating point

## Qualifiers used in data types

- Short and long for int - used typically to extend the size of int where practical

- short -typically 16 bits [int is typically around 32 bits or 16 bits- short is ] - short can't be longer than int

- long has to be atleast 32 bits

- cannot be shorter than int

- Signed or unsigned - applicable to both int and char

- Unsigned numbers - are either positive or zero

- Long double - represents extended precision floating point

- The size of this symbolic constants are contained in the header files :

  - <limits.h>
  - <float.h>

- The sizes of the various data types sizes are specified in the <limit.h> as required by the ANSI C stardard. This ranges in the different sizes are machine dependent

- ul -unsigned long

- A character constant is an interger written as a character within single quotes

- So in limit.h

- use an expression such as :

```
printf("Max size of int = %d\n", INT_MAX) // this prints the size of int in that machine
```

- Another approach would be to us bit shifting to determine the sizes of the various data types:

- Example:

```
printf("Size of min signed char = %d\n",-char(unsigned char) ~0 >> 1)

How it works:

- A zero is converted to ones depending on the size of unsigned char

- Shift to the right one position to clear the sign bit

- Convert back to char

```

## Segmentation fault

```
- segmentation fault is an error that ocurs when your computer tries to access memory it is not allowed to access

- Example - i tried to create a a character array of size 1000000 in the main - main is allocated a few MBs
```

- '\000' - used to represent an arbitrary byte sized bit pattern where 000 is one to three octal digits

- '\xhh" - Used to represent an arbitrary byte sized bit pattern - where hh is one or two hexadecimal digits

- Both octal and hexadecimal can be extended by use of UL or U or L

- '\xhh -Reps an abitrary hexadecimal number -hh is the hexadecimal number

- Concept of indepedence - The war character sets work - is that we work with character constants - we dont care how their internnl representation is done. A character constant '0' may be represented as 48 in one machine and another value in another machine. That is not our concern when writing programs

## Complete set of escape characters

- \n - new line
- \t -horizontal tab
- \v -vertical tab
- \' -single quote
- \" -double quotes
- \r -carriage return
- \a -alarm bell
- \b -backspace
- \f -formfeed
- '\000 -octal number
- '\xhh -hexadecimal number
- \\ -backslash
- \? question mark
- '\0' -has a values of 0

- COnstant expression - an expression that involves only constants

- A string constant or literal is a sequence of zero or more characters surrounded by double quotes

- strlen(s) - returns length of a string s (does not count the null)

- Remember - any string constant is an array - of characters terminated witht the null ('\0')

- Enumeration constant - a list of constant integer values

-If not all values are specified, unspecified values continue the proression from the last specified value.ie...if you only specified the first value to be 1, the second value will be 2 unless explicit values are supplied

- Example : enum boolean (NO, YES)

- Enum are a convinient way to associate constant values with names - similar to define except that in enum, the values can be generated for you

- What is the difference between enumurations constant and define :??
  (How i understand define - is that you have a variable that is associated with a given constant value: in its usge you cannot check if it agrees with the type requirement for its usage instance
  : Now for enumeration, you are having a larger variable that has values associated with it , and this subvalues cn have subvariables that refer to them the way define does)

-Enum variables may be declared - offering a mechanism to check if what is stored is valid/may or may not check

## Declaration -specifies type - a variable can be initialized in its declaration

- External and static variables are initilized to zero by default

- Initialization - Specifying the values - equal sign is used

- Automatic variables for which there is no explicit initializer have undefined(garbage values)

- const qualifier specifies that the particular value of a variable is not to change
  ie: const char msg[] = "warning"

- You can also use const when passing an array as an argument to a function to show that the function is not changing the contents of that array
  ie. int strlen (const char [])

## ARITHMETIC OPERATORS

Integer division truncates any fractional part

- % modulus operator: -produces the remaider when a number is divided with another = 0 for even divided by 2
- Ie A year is leap if it is divisible by 4 and not 100 except that ears divisible b 400

- There re five binary arithmetic operators: + , - , / , \* , %

## Relational and logical operators:

- Relational operators: (> >= < <=) : all have the same precedence

- Below them in precedence are : (== !=) {equality operators}

- Relational operators have lower precedence than arithmetic operators

- Logical operators: || && : evaluated from left to right and evaluation stops as the truth or falsehood of the result is known

- && has higher precedence than || and both are lower in precedence than equality and relational operators.

- != has higher precedence than =

- ! is called th unary negation operator -Converts a non-zero operand to 0 and a zero operand to 0 {Review it latter to see what this means?}

- <ctype.h> - provides set of functions that provide tests and strings conversions indepedent of the character set

## Conversion rules

- Conversion considers whether we loose information during the conversion process. Like in converting int to float - we loose none but in the converse , its possible to loose info

- In situations where we try to do conversions where we loose info, we re not prohibited but warnings are raised

-

- Whether char is signed or unsigned is machine / compiler/ architecture dependent

- C defination guarantees that the characters in a machine's standard printing character set will always be positive quantities

- For portability and to escape the umbinguity of char in differnt machines[whether signed or unsigned] specify signed or unsigned if non character data is to be stored in char variables

- in implicit arithmetic conversions -the lower operand is converted to the 'higher one' before the operation proceeds.

- Float are not automatically converted to double - saves space and also save time - double-precision arithmetic is expensive

- Conversions are more difficult when unsigned operand are involved.?? how

- Conversion rules are more complicated when unsigned operands are involved. The problem is that comparisons between signed and unsigned values are machine-dependent, because they
  depend on the sizes of the various integer types. For example, suppose that int is 16 bits and long is 32 bits. Then -1L < 1U, because 1U, which is an unsigned int, is promoted to a
  signed long. But -1L > 1UL because -1L is promoted to unsigned long and thus appears to be a large positive number.

- When a float is converted into a double - whether the value is rounded off or truncated is implementation dependent.

- Type conversion also takes place when a function is called and arguments are passed to it.In the absence of a function prototype - char and short become float while float becomes double.

- :cast: -explicit type conversion

(type name.ie double) expression : converts the expression to the type specified.

-Example sqrt((double) 4) -in a case where sqrt expects a double as its argument.

- If a function prototype is declared - there is automatic coercion of the arguments passed to the function to reflect the type defined in th function prototype

## Increment and decrement operators

-Decrement operators (++ , --). Can be postfix or prefix.

- Depending on context ++n and n++ can have two different meanings

- In the former - n is increased before it is used while in the latter n is increased later after use

Example:

```

 if n = 5
 x = n++ sets x to 5
 x = ++n sets x to 6 `

```

- in both cases n becomes 6
- Increment and decrement operators can only be applied to variables - an expression like (i+j) ++ is illegal

## Assingment operators and expressions:

- expr1 op= expr2 - This is equivalent to expr1 = (expr1) op (expr2)
- op can be any of the binary operators ie: /,\*,+,-,<< , >>, ^, &, |

## Conditional expressions

- ?:
- (expr1)? expr2: expr3
- In this case expr1 is evaluated , and if found to be true , expr2 is assigned to be its value, otherwise, its value is assigned as expr3

## Operators precedence

- Decrasing order:
- [], (),., ->
- ++,--,!,~
- \*,/,%
- +,-
- > > ,<<
- > ,<,>=,<=
- ==, !=
- &
- ^
- |
- &&
- ||
- :?
- =,+=, op=
- ,

- Side effects --like i++ .ie - line[i] = i++
- Functions and expressions may be evaluated differently
- The order or function arguments may not be evaluated linearly - so if some arguments depends another -the implementation may not be always predicatble in differnt machines
- Writing code that depends on the order of evalation is a bad programming practice
