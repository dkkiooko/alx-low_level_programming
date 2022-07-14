#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: number of elements in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
