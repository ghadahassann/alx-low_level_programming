#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
		b++;
	}
	putchar(b);
	printf("\n");
	return (0);
}
