#include "main.h"
#include <stdio.h>
/**
 * main - prints own name
 * @argc: argument count
 * @argv: argument vector for values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
