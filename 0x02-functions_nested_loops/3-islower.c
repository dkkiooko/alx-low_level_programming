/*
 * File - 3-islower.c
 * Auth: Daniel K Kioko
 */
#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @x: character to test
 * Return: 1 if char is lowercase, 0 else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
