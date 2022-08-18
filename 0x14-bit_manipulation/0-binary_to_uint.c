#include "main.h"
/**
 * binary_to_uint - convert binary number to integer
 * @b: points to string of 0 and 1 chars
 * Return: converted number or 0 on fail
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
