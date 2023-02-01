#include "main.h"

/**
 * jack_bauer- prints every minute of the day. Starting from 00:00 to 23:59
 *
 * Return: print to screen
 */

void jack_bauer(void)
{
	int i, j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			if (j < 1)
			{
				_putchar('0' + j);
				_putchar('0' + j);
				_putchar(58);
			}
			else
			{
				_putchar('0' + j - 1);
				_putchar('0' + j);
				_putchar(58);
			}
			if (i > 9)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			else
			{
				_putchar(48);
				_putchar('0' + i);
			}
			_putchar(10);
		}
	}
}
