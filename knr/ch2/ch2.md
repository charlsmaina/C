

  #  Chapter 2 
  ## Types, Operators and expressions

  -Declaration states what variables are to be used,what type they are and  may be what are their initial values

  -Operators - What is to be done to variables

  -Expressions - combine variables and constants through operations to produce new values.

  -The type of an object determines what values it can have and the set of operations that can be performed unto it

  # Basic data types in C
   1.char -capable of holding a single character in the local character set

   2.int  - Holds an interger whose size depends on the natural size of an interger in the host machine

   3.Float -A single precision floating point

   4.double - A double precision floating point

   ## Qualifiers used in data types
 -Short and long for int - used typically to extend the size of int where practical

-short -typically 16 bits [int is typically around 32 bits or 16 bits ]
short can't be longer than int

    
-long [ has to be atleast 32 bit .
cannot be shorter than int]

-Signed or unsigned - applicable to both int and char

-Unsigned numbers  - are either positive or zero

-Long double - represents extended precision floating point

-The size of this symbolic constants are contained in the header files <limits.h> and <float.h>

-The sizes of the various dat types sizes are spsecified in the <limit.h>

-A character constant is an interger written as a character within single quotes. It is an int as it is stored as so in the ASCII charater set. You cn print a character as an interger and vice versal

-segmentation fault is an error that ocuurs when your computer tries to access memory it is not allowed to access-Example - i tried to create a a character arrary of size 100000000 in the main - main is allocated a few MBs 
It raised a segmentation fault error


-'\000' - used to represent an arbitrary octal number

-'\xhh  -Reps an abitrary hexadecimal number -hh is the hexadecimal number

## Complete set of escape characters 
      -\n - new line - moves cursor to a new line

      -\t -horizontal tab-Inserts a horizontal tab

      -\v -vertical tab

      -\' -single quote - For inserting single quotes in a srting

      -\" -double quotes

      -\r -carriage return -Moves cursor to the beggining of current line. Used to overwrite output

      -\a -alarm bell -May produce a beep sound

      -\b -backspace - Moves cursor one position. Can be used to overwrite output


      -\f -formfeed -Was originally used to advance to the next page in printed output

      -'\000 Represents a character with a given octal value
      Example:
      
      charc = '\101';//octal 101 = decimal 65 = 'A

      
      -
      -'\xhh -hexadecimal number -Represents a character with a given hexadecimal value

      -'\\' -backslash - to represent the backslash itself

      -\? question mark
      -'\0' -has a value of 0. represents end of string

* Constant expression - an expression that involves only constants

* A string constant or literal is a sequence of zero or more characters surrounded by double quotes
* Enumeration constant - a list of constant integer values

* If not all values are specified, unspecified values continuethe progression from the last specified value.ie...if you only specified the first value to be 1, the second value will be 2 , the third will be 3 and so forth.First value is 0, then 1 then 2, unless explicit values are supplied

  ```Example : enum boolean (NO, YES)```

* Enum are a convinient way to associate constant values with names - similar to define except that in enum, the values can be generated for you

* Enum variables may be declared  - offering a mechanism to check if what is stored is valid/may or may not check

* Declaration -specifies type - a variable can be initialized in its declaration. Its like telling the compiler, hey , this variable exists , but it does not allocate memory untill we define the variable. All definations are declarations but not all declarations are definations
```
Example
 int x ;//declaration only:No memory is allocated
 int x = 10;// declaration + defination :memory is allocated 
 ```


* External and static variables are initilized to zero by default
* Automatic variables for which is no explicit initializer have undefined(garbage values)


* const qualifier specifies that the particular value of a variable is not to change

   ```ie: const char msg[] = "warning" ```

* You can also use const when passing an array as an argument to a function to show that the function is not changing the contents of that array

      ```ie. int strlen (const char [])```

### ARITHMETIC OPERATORS
* Integer division truncates any fractional part

- % modulus operator: -produces the remaider when a number is divided with another
* They are:
      ``` + . - , * , /, % . ```


# Relational and logical operators:
-Relational operators:  ```> >= <  <= ``` alll have the same precedence

-Below them in precedence are : == !=

-Relational operators have lower precedence than arithmetic Logical operators: ```(|| && : evaluated from left to right and evaluation stops as the truth or falsehood od the result is known)```

-&& has higher precedence than || and both are lower in precedence than equality and relational operators.
-!= has higher precedence than = and  ! = unary negation operator 

  -<ctype.h> - provides set of functions that provide tests and strings conversions indepedent of the character set

  -Whether char is signed or unsigned is machine / compiler/ architecture dependent
  -For portability and to escape the umbinguity of char in differnt machines[whether signed or unsigned] specify signed or unsigned if non character data is to be stored in char variables

-In implicit arithmetic conversions -the lower operand is converted to the 'higher one' before the operation proceeds.

- Float are not automatically converted to double - saves space and also save time - double-precision arithmetic is expensive
- Conversion rules are more complicated when unsigned operands are mixed with signed operands.  The problem is that comparisons between signed and unsigned values are machine-dependent, because they depend on the sizes of the various integer types. 

- When a float is converted into a double - whether the value is rounded off or truncated is implementation dependent.
-Type conversion also takes place when a function is called and arguments are passed to it.In the absence of a function prototype - char and short become float while float becomes double.


 

