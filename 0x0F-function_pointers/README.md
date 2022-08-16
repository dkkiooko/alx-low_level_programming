TASKS
0. What's my name
Write a function that prints a name
- Prototype: void print_name(char *name, void (*f)(char *));

1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array
- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- action is a pointer to the function you need to use

2. To hell with circumstances; I create opportunities
Write a function that searches for an integer
- Prototype: int int_index(int *array, int size, int (*cmp)(int));
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- if no element matches, return -1
- if size <= 0, return -1

3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations
- you are allowed to use the standard library
- usage: calc num1 operator num2
- you can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
- operator is one of the following: + - * / %
- print result followed by a new line
- assume the result of all operations can be stored in an int
- if number of arguments is wrong print Error, followed by a new line with exit status 99
- if user tries to divide (/ or %) print Error followed by a new line with exit status 100
This task requires that you create 4 different files

3-calc.h
file should contain all the function prototypes and data structures used by the program.

