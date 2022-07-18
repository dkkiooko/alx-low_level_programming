#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: pointer where new substring is placed
 * Return: s if c is found else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
