#include "main.h"

/**
 * puts_half- function that prints half of a string, followed by a new line
 * @str: parameter type pointer to char
 *
 * Return: print the second half of the string
 */

void puts_half(char *str)
{
	int len_str = _strlen(str);
	int i;

	for (i = (len_str / 2); *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar(10);
}
