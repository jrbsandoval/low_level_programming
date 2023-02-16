#include "main.h"

/**
 * print_most_numbers- function that print the numbers, 0 - 9,followed by newln
 * Requestments: except the numbers 2 and 4
 * - only can used the funcion _putchar twice in your code
 * Return: print numbers
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar(10);
}
