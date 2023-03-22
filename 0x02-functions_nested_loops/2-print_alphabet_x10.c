#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print 10 times
 *
**/
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	i++;
	}

}
