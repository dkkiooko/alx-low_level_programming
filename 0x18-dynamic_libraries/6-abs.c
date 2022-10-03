#include "main.h"

/**
* _abs - ouputs absolute value of integer in put
* @n: integer to check
*
* Return: n
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
	{
		n *= -1;
		return (n);
	}
}	
