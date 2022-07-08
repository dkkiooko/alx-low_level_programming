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
	int triangle;
	int spacer;

	if (size > 0)
	{
		for (triangle = 1; triangle <= size; triangle++)
		{
			for (spacer = 1; spacer <= size; spacer++)
			{
				if (spacer <= size - triangle)
				{
					_putchar(' ');
				}
				if (triangle + spacer >= size + 1)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
