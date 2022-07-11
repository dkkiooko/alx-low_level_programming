REQUIREMENTS
compile the files using -Wall -Werror -Wextra -pedantic -std=gnu89
files should end with a new line
Betty coding style used
Do not use the standard library
Prototypes should be included in main.h

TASKS
0. 98 Battery st
function that takes a pointer to an int as parameter and updates the value it points to 98
- Prototype: void reset_to_98(int *n)

1. Don't swap horse in crossing a stream
function that swaps the values of two integers
- Prototype: void swap_int(int *a, int *b)

2. This report, by its very length, defends itself against the risk of being read
function that returns the length of a string
- Prototype: int _strlen(char *s)

3. I do not fear computers. I fear the lack of them
function that prints a string, followed by a new line, to stdout
- Prototype: void _puts(char *str)

4. I can only go one way. I've not got a reverse gear
function that prints a string, in reverse, followed by a new line
- Prototype: void print_rev(char *s)

5. A good engineer things in reverse and asks himself about the stylistic consequences of the components and systems he proposes
function that reverses a string
- Prototype: void rev_string(char *s)

6. Half the lies they tell about me aren't true
function that prints every other character of a string, starting with the first character, followed by a new line
- Prototype: void puts2(char *str)

7. Winning is only half of it. Having fun is the other half
function that prints half of a string, followed by a new line
- Prototype: void puts_half(char *str)
- Function should print the second half of the string
- if the number of characters is odd, the function should print the last n characters of the string where n = (length_of_the_string - 1) / 2

8. Arrays are not pointers
function that prints n elements of an array of integers, followed by a new line
- Prototype: void print_array(int *a, int n)
- n is the number of elements of the array to be printed
- numbers must be separated by comma, followed by a space
- numbers should be displayed in the same order as they are stored in the array
- you are allowed to use printf

9. strcpy
function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
- Prototype: char *_strcpy(char *dest, char *src)
- Return value: the pointer to dest

10. Great leaders are willling to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
function that convert a string to an integer
- Prototype: int _atoi(char *s)
- number in the string can be preceded by an infinite number of characters
- if there are no numbers in the string, function must return 0
- take into account all the - and + signs before the number
- if there are no numbers in the string, the function must return 0
- you are not allowed to use long
- you are not allowed to declare new variables of "type" array
- you are not allowed to hard-code special values
- use the 'fsanitize=signed-integer-overflow gcc flag to compile your code


