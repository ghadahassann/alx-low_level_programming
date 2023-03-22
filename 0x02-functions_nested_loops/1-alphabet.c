#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - print lower case
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}

