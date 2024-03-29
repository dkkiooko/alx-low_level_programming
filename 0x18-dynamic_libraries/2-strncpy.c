#include "main.h"

/**
* _strncpy - copies n bytes of src to the sedest string
* @dest: string to copy to 
* @src: string being copied
* @n: largest number of butes to cpy
*
* Return: address of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}	
