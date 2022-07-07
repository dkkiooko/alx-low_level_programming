/*
 * File - 4-print_most_numbers.c
 * Auth: Daniel K Kioko
 */
#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 save 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
