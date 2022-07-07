/*
 * File - 6-print_line.c
 * Auth: Daniel K Kioko
 */
#include "main.h"
/**
 * print_line - draws straight line in the terminal
 * @n: length of line to be printed
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
