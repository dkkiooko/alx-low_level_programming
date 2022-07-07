/*
 * File - 3-print_numbers.c
 * Auth: Daniel K Kioko
 */
#include "main.h"
/**
 * print_numbers - prints 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
