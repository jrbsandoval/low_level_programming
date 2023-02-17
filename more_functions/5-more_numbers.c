#include "main.h"

/**
 * more_numbers- funct that prints 10 times the numbers, 0 - 14, folowd by a nw
 * Requireds: Can only use _putchar three times in your code
 * Return: print numbers from 0 - 14. Ten times.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar(10);
	}
}
