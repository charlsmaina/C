## All about functions

- Character arrays are terminated by the null terminator
- Macros are in uppercase
- extern keyword is used to mark global variables available to a file thats not the one the global variable was defined
- static keyword - restricts a global variable to its file
- C defaults to pass by value - to pass by reference, you have to do it explicitely , by use of pointers: etc. When extern is used , you are communicating to the compiler to trust you on the type of variable and the compiler can then go on to check the usage in its new file
- The linker does the function of now getting the actual variable during linking and places it in its right position before the program runs.

- Symbol visiblity: Applies in the case of global variables, static limits the scope to the current file while defination without extern means it can be accessed from other files using extern.

- prepreocessor dumps the contents of the header file in the c.file - in these case the header file contains the different declarations.

- stdlib is in machine code and its functions are inserted by linker during linking

- Why C is faster:
  - No runtime overhead - raw memory addresses -locations
  - No GC - you do it manually
  - Compiles directly to machine code
  - Close to hardware - you can access memory directly:

- Cast operator (int) expression -converts the expression to the type in braces
- External variables have a larger scope and big lifetime. Any c program contains functions and variables as its core building blocks. Functions are external.ie you cannot define a function inside another function. For variables that are shared by many functions, it may be convinient to use external variables instead of using long lists of arguments in the functions. But this can lead to functions that have alot of data connections which may affect the structure and coupling of the different functions. -hidden dependencies - limits modularity - ie function depends on a state that can be modifid outside of it.

- ### Scope and header file
- Scope - part or region in a program where a variable or a name can be used
- If an external variable is to be refered to or it is defined in another source file - an extern declaration is mandatory
- external variables should only be defined once -
- defination - causes storage to be allocated
- declaration - its telling the compiler - hey ..this variable is of this type, it is defined alse where. No storage is allocated and the variables are neither created

### Static variables

- Static declaration limits the scope of an external variable to its file scope
- Internal static variables are local to a particular functionjust as automatic variables are, but unlike automatics, they remain in existence rather than coming ang going when the function is activated.

### Register variables

- a register declaration advises the compiler that the variable will be heavily used - compiler can place this variables in machine registers which may result in faster programs..ie register int x;
- register declaration can only be applied to automatic variables and to the formal parameters of a function

- Automatic variables, including formal parameters hide external variables. When you have a local variable having the same name a s a an external variable, the local variable is the one that is considered.

- in the absence of explicit initialization, external variables and static variables are guaranteed to be initialized to zero. Automatic and register variables are have undefined(garbage) initial values

- external and static variables must be initialized by a constant expression, and the initialization is only done once before the program runs

- for automatic or static variable, the initializer is not restricted to be a constant
