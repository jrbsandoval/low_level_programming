#include "main.h"

/**
 * print_to_98- function that prints all numbers from n to 98, end a new line.
 * @n: parameter type integer
 *
 * Return: print numer to screen
 */

void print_to_98(int n)
{
	int i = 98;

	if (n > i)
		for (; i <= n; n--)
		{
			printf("%d", n);
			if (i != n)
				printf(", ");
		}
	else
		for (; n <= i; n++)
		{
			printf("%d", n);
			if (i != n)
				printf(", ");
		}
	printf("\n");
}
