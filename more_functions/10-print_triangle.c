#include "main.h"

/**
 * print_triangle- function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Required: can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */

void print_triangle(int size)
{
	int i, j, p;

	if (size <= 0)
		_putchar(10);
	else
	{
		/*loop for rows according to their imput*/
		for (i = 0; i < size; i++)
		{
			/*loop for the spaces*/
			for (j = (1 + i); j < size; j++)
				_putchar(32);
			/*loop for the square*/
			for (p = j - (i + 1); p < size; p++)
				_putchar(35);
			_putchar(10);
		}
	}
}
