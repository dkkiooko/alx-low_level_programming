/*
 * File - 1-alphabet.c
 * Auth: Daniel K Kioko
 */
#include <stdio.h>
#include "main.h"
/**
 * void - prints lowercase alphabet
 * then new line
 * Return: nothing
 */
void print_alphabet(void)
{
	int i = 97;

	for (i; i <=122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
