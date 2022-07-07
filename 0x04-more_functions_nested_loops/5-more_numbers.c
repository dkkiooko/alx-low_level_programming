/*
 * File - 5-more_numbers.c
 * Auth: Daniel K Kioko
 */
#include "main.h"
/**
 * more_numbers - prints 1 to 14 10 times then new line
 * Return: nothing
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
