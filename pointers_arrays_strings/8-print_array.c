#include "main.h"

/**
 * print_array- function that prints n elements of an array of integers
 * followed of new line
 * @a: parameter type pointer to int
 * @n: parameter type int
 *
 * Return: print elements of array
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0;  i < n; i++)
		{
			printf("%d", *(a + i));
			if (i != (n - 1))
				printf(", ");
		}
		printf("\n");
	}
}
