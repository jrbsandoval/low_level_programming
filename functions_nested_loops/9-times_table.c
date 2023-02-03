#include "main.h"

/**
 * times_table- function that prints the 9 times table, starting with 0.
 * Requires: Utilizar funcion putchar
 * Return: void
 */

void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = j * i;

			/*imprimir dos digitos con funcion putchar*/
			if (res > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			/*Numero menores de 9 imprimir 1 solo digito */
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' + (res));
			}
		}
		_putchar(10);
	}
}
