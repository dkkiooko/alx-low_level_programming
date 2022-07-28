#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;
	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
