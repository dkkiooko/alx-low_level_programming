/*
 * Auth: Dan
 */
#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: pointer to string
 *
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != 0)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
