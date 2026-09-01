# What is a pointer

> A pointer is a variable that stores the address of another variable. In a nut shell, it points to another variable :

## How do you declare a pointer

>To declare a pointer, you have to specify its type. Its type has to be compatible with the type it points to. A pointer pointing to an int  MUST be of type int. &variable_name is used to pass the address of a variable to a pointer

## pointer declaration example

```C
int x = 10
int *ip;
ip = &x // now  ip  points to x
 
```

## Some concepts about pointers i find confusing

- ### Concept of passing by reference
  
>By default C passes argument by value. This means only the copies of the arguments are passed to the called function. That means you cannot change the variables in the scope a function is called from. Pointers provide a way to bypass this by enabling changing variables in the scope where a function was called from.

- ### Concept of dereferencing / indirection

>So  consider the expressions below:

```C
1 .*ip = *iq
2. *ip = 10
```

> A dereference pointer can mean two things depending on which side it appears. When on the right side of an = sign , it can be treated as a variable and when on the left side it is treated as the value the pointer points to.
