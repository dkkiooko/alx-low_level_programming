/*
 * File - 3-print_alphabets.c
 * Auth: Daniel Kioko
 */
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
