/*
 * File - 101-natural.c
 * Auth: Daniel K Kioko
 */
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints sum of multiples of
 * 3 and 5 under `1024
 * Return: Always 0
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
	printf("%d\n", res);
	return (0);
}
