/*
 * Auth: Dan
 */
#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int a, b;

	if (size < 1)
	{
		for (a = 0; a < size; ++a)
		{
			for (b = size - a; b > 0; b--)
			{
				_putchar(' ');
			}
			while (a--)
			{
				_putchar('#');
			}
			a++;
			_putchar('\n');
		}
	}
}
