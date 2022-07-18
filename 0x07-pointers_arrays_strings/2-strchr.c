#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: pointer where new substring is placed
 * Return: s if c is found else NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*s = &c;
			return s;
		}
		else
		{
			i++;
		}
	}
	
	return (NULL);
}
