/*
 * File - 6-print_numberz.c
 * Auth: Daniel Kioko
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print 0 - 9 with putchar
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
