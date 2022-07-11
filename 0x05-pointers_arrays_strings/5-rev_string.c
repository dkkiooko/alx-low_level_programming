/*
 * Auth: Dan
 */
#include "main.h"
/**
 * rev_string - reverses string
 * @s: pointer to string
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int temp, i, j;

	while (s[length] != 0)
	{
		length++;
	}
	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
