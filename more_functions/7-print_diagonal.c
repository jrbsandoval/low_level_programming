#include "main.h"

/**
 * print_diagonal- function that draws a diagonal line on the terminal.
 * @n: type integer. is the number of times the character \ should be printed
 * Requireds: The diagonal should end with a \n
 * You can only use _putchar function to print
 * If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = (n - i); j < n; j++)
				_putchar(32);
			_putchar('/');
			_putchar(10);
		}
	}
}
