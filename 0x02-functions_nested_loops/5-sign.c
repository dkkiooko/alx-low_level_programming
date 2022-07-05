/*
 * File - 5-sign.c
 * Auth: Daniel K Kioko
 */
#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks whether number is greater than
 * or equal to or less than zero
 * @n: number to be checked
 * Return: 1 if =ve 0 or -1 if -ve
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
