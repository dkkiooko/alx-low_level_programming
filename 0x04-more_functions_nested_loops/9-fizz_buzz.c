/*
 * Auth: Dan
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers form 1 to 100
 * multiples of three print Fizz
 * multiples if five print Buzz
 * Return: nothing
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
	}
}
