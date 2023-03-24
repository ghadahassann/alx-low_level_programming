#include "main.h"
/**
 * print_square - prints a square
 * @size: integer
 *
 */
void print_square(int size)
{
	int i, j;

	i = j = size;
	while (size > 0)
	{
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		if (size > 1)
		{
			_putchar('\n');
		}
		size--;
		i = j;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
