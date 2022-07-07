/*
 * File - 0-isupper.c
 * Auth: Daniel K Kioko
 */
#include "main.h"
/**
 * _isupper - checks whether letter is uppercase
 * @c: character to be checked
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
