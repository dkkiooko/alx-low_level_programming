/*
 * File - 2-print_alphabet.c
 * Auth: Daniel Kioko
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lowercase alphabet
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
