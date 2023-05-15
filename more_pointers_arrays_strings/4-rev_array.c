#include "main.h"

/**
 * reverse_array- function that reverses the content of an array of integers.
 * @a: first parameter type pointer to int
 * @n: second parameter type integer
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int tmp, *ptr;

	if (n > 0)
	{
		ptr = a + (n - 1);
		n /= 2;
		for (; n > 0; n--, ptr--, a++)
		{
			tmp = *a;
			*a = *ptr;
			*ptr = tmp;
		}
	}
}
