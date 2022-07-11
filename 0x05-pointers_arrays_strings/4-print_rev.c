/*
 * Auth: Daniel Kioko
 */
#include "main.h"
/**
 * print_rev - prints a string in reverse and new line
 * @s: pointer to string
 * Return: nothing
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count > 0)
	{
		count--;
		_putchar(s[count]);
	}
	_putchar('\n');
}
