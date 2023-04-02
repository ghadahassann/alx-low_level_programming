#include "main.h"
#include <string.h>
/**
 * _strlen -  returns the length of a string
 * @s: pointer to char
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*(s + c) != '\0')
	{
		c++;
	}
	return (c);
}
