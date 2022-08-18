#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
/**
 * _pow - get power of a number
 * @base: base number
 * @power: power
 * Return: power
 */
unsigned int _pow(unsigned int base, unsigned int power)
{
	unsigned int i;
	unsigned long int num;

	num = 1;
	for (i = 0; i < power; i++)
	{
		num *= base;
	}
	return (num);
}
