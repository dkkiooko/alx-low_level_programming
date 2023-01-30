#include "search_algos.h"

/**
* linear_search - search for value in array of integers
* @array: pointer to the fiest element of array to search
* @size: number of elements in array
* @value: to be searched for
* Return: first index where value is located
* or -1 if array is Null or not present
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;


	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
