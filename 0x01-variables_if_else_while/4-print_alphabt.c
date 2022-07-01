/*
 * File 4-print_alphabt.c
 * Auth: Daniel Kioko
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet except q, e
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
