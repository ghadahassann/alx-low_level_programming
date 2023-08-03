#include <stdio.h>
#include "main.h"


/**
 * _puts_recursion -  prints a string
 * @s : pointer to char
 * Return : nothing if 0
 * Return : string if not 0
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
