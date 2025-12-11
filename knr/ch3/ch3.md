# CONTROL FLOW

- Its what determines the order in which computations are done
- statement - an expression terminated with a semicolon ;
- block - compound statement - statements enclosed in braces

### if-else

- used to express decisions
- Else part is optional
- Can be nested - but to maintain association - else is associated with last if
- Braces help enforce association

### else if

- In this you have an opening if - and other else if
- They test expressions which express different decisions posibilities
- The last else - is optional and can be used to handle default decision if none of the above expressions evaluated to true

### Switch statement

- It is a multiway decisions control structure that compares whether a given expression matches one of a number of constant integers values and branches accordingly.

- In switch you can compare , interger constansts only - and chars are ints so they work
- You cannnot use runtime variables as case tests
- compile time - compiler translates your source code into object code/executable
- What the compiler knows at compile time

  - Source text
  - macros (#define)
  - eneum values
  - literal constanst like 4
  - anything that can be evaluated by the compiler without running the program

  - Effects the compiler can reject invalid code (syntax errors) ,optimize , and emit errors for things that are not constant when they should be constant

- Runtime - it is when you execute the program by running the command : ./a.out
  What happens - The program knows - User input - values returned by functions - Contents of files - results of expressions that depend on variables and I/O - anything computed at runtime

- Key results: runtime checks, segmentation faults, errors like divide by zero
- A compile time constant is a value the compiler can determine without running the program
- A runtime value is dependent on execution and its known at compile time

### Why case labels need to be compile time constants

- compiler needs to know all case labels so that it can generate efficient dispatch code (jump tables or comparisons)
-

- BUT switch expression - can be a runtime variable
- Cases must be compile time values

### Short notes (concise)

- Use character literals (e.g., `'a'`) in `case` labels — they are integer constants in C.
- Do not use variables or expressions that depend on runtime values as `case` labels; the compiler must know each label at compile time.
- If you need to compare against runtime variables, prefer `if`/`else if`, or compute a small runtime "tag" and `switch` on that tag, or use a lookup/function table.

### For loop and while loop

- Think them as structures that facilitate the performance of a given task multiple times based on certain conditions
- Conditions are checked and if they evaluate to non-zero - the statements enclosed by the loop executes

### multifile compilations

- Steps to follow:
  - Write a clear function prototype using include guards: #ifndef GETLINE #define GETLINE ...function prototype...#endif
  - Write a clear function defination using the function prototype
  - Include the header file by #include "headerfile.h"
  - Include also the header file in the main file

### Function of the #include guard used in function headers

- It helps avoid duplicate processing where a header file is included more once leading to compilation errors
- It purpose is to ensure no header file is seen more than once per translation unit
