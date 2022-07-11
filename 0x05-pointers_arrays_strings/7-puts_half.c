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
	int len = 0;
	int h;
	int half = len / 2;
	int opt = (len -1) / 2;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (h = 0; h < half; h++)
		{
			_putchar(str[h]);
		}
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < opt; h++)
		{
			_putchar(str[h]);
		}
		_putchar('\n');
	}
}
