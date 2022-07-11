/*
 * Auth: Dan
 */
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string
 *
 */
void puts_half(char *str)
{
	int len = _strlen(char *s);
	int h;

	if (len % 2 == 0)
	{
		for (h = 0; h < len / 2; h++)
		{
			_putchar(str[h]);
		}
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < (length_of_the_string - 1) / 2; h++)
		{
			_putchar(str[h]);
		}
		_putchar('\n');
	}
}
