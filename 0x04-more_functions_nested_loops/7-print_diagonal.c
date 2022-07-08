/*
 * File - 7-print_diagonal.c
 * Auth: Daniel K Kioko
 */
#include "main.h"
/**
 * print_diagonal - prints a diagonal of size n
 * @n: length of diagonal
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n')
}
