#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 if strings are equal
 * >0 if first non-matching character in s1 is greater
 * <0 else
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
