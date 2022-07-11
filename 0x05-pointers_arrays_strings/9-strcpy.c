/*
 * Auth: Dan
 */
#include "main.h"
/**
 * _strcpy- copies string from pointer to pointer
 * @dest: buffer to be pointed to
 * @src: string to copy
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
