#include "main.h"

/**
 * swap_int-  function that swaps the values of two integers.
 * @a: first parameter type pointer to int
 * @b: second parameter type pointer to int
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
