#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination to be copied to 
 * @src: origin of data to be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
