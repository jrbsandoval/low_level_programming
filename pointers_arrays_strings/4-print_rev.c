#include "main.h"

/**
 * print_rev- function that prints a string, in reverse, followed by a new line
 * @s: parameter pointer to char
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(*(s + i));
		--i;
	}
	_putchar(10);
}
