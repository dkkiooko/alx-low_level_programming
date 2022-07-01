/*
 * File - 7-print_tebahpla.c
 * Auth: Daniel Kioko
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
