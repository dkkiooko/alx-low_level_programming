#include "main.h"
#include <stdio.h>
#include <stlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: memory space with s1
 * @s2: second array
 * @n: first number of bytes of s2 to be assigned
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, co, co_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n <= j)
	{
		j = n;
		arr = malloc(sizeof(char) * (i + j + 1));
	}
	else
		arr = malloc(sizeof(char) * (i + n + 1));

	if (arr == NULL)
		return (NULL);

	for (co = 0; co < i; co++)
		arr[co] = s1[co];
	for (co_2 = 0; co < j; co_2++)
	{
		arr[co] = s2[co_2];
		co++;
	}
	co++;
	arr[co] = '\0';
	return (arr);
}
