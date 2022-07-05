/*
 * File - 1-alphabet.c
 * Auth: Daniel K Kioko
 */
#include <stdio.h>
#include "main.h"
/**
 * Description - prints lowercase alphabet
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
