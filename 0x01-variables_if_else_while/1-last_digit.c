/*
 * File: 1-last_digit.c
 * Auth: Daniel Kioko
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is zero, >5 or <5
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	else if (d != 0 && d < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0\n", n, d);
	return (0);
}
