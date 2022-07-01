/*
 * File 9-print_comb.c
 * Auth: Daniel Kioko
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
