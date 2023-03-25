#include "main.h"
#include <stdio.h>
/**
 * main - function of any c program
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) || (i % 5)) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}