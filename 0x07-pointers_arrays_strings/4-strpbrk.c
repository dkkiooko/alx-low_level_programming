#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @accept: bytes to be matched
 * @s: string to be searched for a match
 * Return: pointer to byte in s or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
