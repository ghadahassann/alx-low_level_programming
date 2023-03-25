#include "main.h"
/**
 * print_last_digit - prints last digit
 * @d: integer
 * Return: last digit
 */
int print_last_digit(int d)
{
	int x;

	x = d % 10;
	if (x < 0)
	{
		x *= -1;
	}
	_putchar(x + '0');
	return (x);
}
