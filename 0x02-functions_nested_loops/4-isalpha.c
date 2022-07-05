/*
 * File - 4-isalpha.c
 * Auth: Daniel K Kioko
 */
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks whether char is in alphabet
 * @c: character to be checked
 * Return: 1 if char is English
 * 0 if char isn't english
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
