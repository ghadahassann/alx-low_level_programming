#include <stdio.h>
#include "main.h"

/**
 * factorial - prints factorial of num
 * @n: integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
