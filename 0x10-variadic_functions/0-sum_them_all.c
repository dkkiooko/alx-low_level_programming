#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * 0 on rerror
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i, sum = 0;

	va_start(lst, n);
	if (n != 0)
	{
		for (i = 0; i < n; sum += va_arg(lst, unsigned int), i++)
			;
	}
	va_end(lst);

	return (sum);
}
