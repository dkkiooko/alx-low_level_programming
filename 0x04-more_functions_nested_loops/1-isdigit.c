/*
 * File - 1-isdigit.c
 * Auth: Daniel K Kioko
 */
#include "main.h"
/**
 * _isdigit - checks whether is between 0 and 9
 * @c: digit to be checked
 * Return: 1 if c is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
