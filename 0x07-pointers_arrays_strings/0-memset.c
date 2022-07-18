#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to destination
 * @n: number of bytes to be filled
 * @b: constant byte
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s)
}
