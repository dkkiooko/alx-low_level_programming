#include "main.h"
/**
 * prime_found - finds prime number
 * @i: divident
 * @j: divider
 * Return: return 1 if input is prime, else 0
 */
int prime_found(int i, int j)
{
	if (j != 1)
	{
		if (i == j)
		{
			return (1);
		}
		else if (j % i == 0 || j <= 1)
		{
			return (0);
		}
		else
		{
			return (prime_found(i + 1, j));
		}
	}
	return (0);
}
/**
 * is_prime_number - shows if n is prime
 * @n: number
 * Return: 1 if n is prime 0 else
 */
int is_prime_number(int n)
{
	int a = 2;

	return (prime_found(a, n));
}
