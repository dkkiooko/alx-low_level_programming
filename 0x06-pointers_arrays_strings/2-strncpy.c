#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination where string is to be copied
 * @src: string to be copied
 * @n: limit of string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
