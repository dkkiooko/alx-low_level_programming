/*
 * File - 6-abs.c
 * Auth: Daniel K Kioko
 */
#include <stdio.h>
#include "main.h"
/**
 * _abs - checks absolute value fo integer
 * @i: value to be checked
 * Return: absolute value
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
