/*
 * File - 7-print_last_digit.c
 * Auth: Daniel K Kioko
 */
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: digit to find last place of
 * Return: The last didit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
