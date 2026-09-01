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
