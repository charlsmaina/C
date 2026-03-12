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
