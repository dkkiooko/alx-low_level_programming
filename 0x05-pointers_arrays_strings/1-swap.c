/*
 * Auth: Dan
 */
#include "main.h"
/**
 * swap_int - swaps values of 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
