REQUIREMENTS 
Code should be in Betty style
Do not use the standard library
Prototypes of all functions should be in main.h

TASKS
0. memset
Write a function that fills memory with a constant byte
-Prototype: char *_memset(char *s, char b, unsigned int n);
- _memset() fills the first n bytes of the memory area pointed to by s with the constant byte b
- return pointer to memory area

1. memcpy
Write a function that copies memory area
- Prototype: char *_memcpy(char *dest, char *src, unsigned int n)
- _memcpy() copies n bytes from memory area src to memory area dest
- returns a pointer to dest

2. strchr
Write a function that locates a character in a string
- Prototype: char *_strchar(char *s, char c)
- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

3. strspn
Write a function that gets the length of a prefix substring
- Prototype: unsigned int _strspn(char *s, char *accept);
- Returns the number of bytes in the initial segment of s which consist only of bytes from accept

4. strpbrk
Write a function that searches a stringfor any of a set of bytes
- Prototype: char *_strpbrk(char *s, char *accept);
- The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
- Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL If no such byte is found

5. strstr
Write a fucntion that locates a substring
- Prototype: char *_strstr(char *haystack, char *needle);
- The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compares
- Returns a pointer to the beginning of the located substring, or NULL If the substring is not found

6. Chess is mental torture
Write a function that prints the chessboard
- Prototype void print_chessboard(char (*a)[8]);

7. The line of life is a ragged diagonal between duty and desire
Write a function that prints the sum of the two diagonals of a square matrix of integers
- Prototype: void print_diagsums(int *a, int size)
- You can use the standard library

8. Double pointer, double fun
Write a function that sets the value of a pointer to a char
- Prototype: void set_string(char **s, char *to)

