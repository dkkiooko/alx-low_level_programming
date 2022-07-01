/*
 * File: 0-positive_or_negative.c
 * Auth: Daniel K Kioko
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** 
 * main - state positive, negative or zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	if (n > 0)
		printf("%d is positive\n", n);
 	if (n < 0)
		printf("%d is negative\n", n);	
	else
		printf("%d is zero\n", n);

	return (0);
}
