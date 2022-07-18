#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be compared to 
 * @accept: string to compare
 * Return: number of bytes in s consisting of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter, n;
	int i = 0;
	int j = 0;

	while (accept[i] != '\0')
	{
		i++;
	}

	while (s[j] != '\0')
	{
		for (n = 0; n < i; n++)
		{
			if (s[j] == accept[n])
			{
				counter++;
				break;
			}
		}
		if (n == i)
		{
			return (counter);
		}
		else
		{
			j++;
		}
	}
}
