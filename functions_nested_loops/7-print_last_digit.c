#include "main.h"

/**
 * print_last_digit- function that prints the last digit of a number.
 * @j: parameter type integer
 *
 * Return: Returns the value of the last digit
 */

int print_last_digit(int j)
{
	int res = j % 10;

	if (res < 0)
	{
		res = _abs(res);
		_putchar(res + '0');
	}
	else
		_putchar(res + '0');

	return (res);
}
