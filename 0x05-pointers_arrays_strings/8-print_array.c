/*
 * Auth: Dan
 */
#include "main.h"
/**
 * print_array - prints n elemts of an array
 * @a: pointer to the array
 * @n: number of elements in array
 */
void print_array(int *a, int n)
{
	while (--n)
	{
		printf("%d, ", a[n]);
	}
	printf("%d\n", a[n]);
}
