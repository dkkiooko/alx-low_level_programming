/*
 * Auth: Dan
 */
#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elemts of an array
 * @a: pointer to the array
 * @n: number of elements in array
 */
void print_array(int *a, int n)
{
	int i;
	int j = i - 1;

	for (i = 0; i < j; i++)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[0]);
}
