#include "main.h"

/**
 * rev_string- function that reverses a string.
 * @s: parameter pointer to char
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i, max;
	char tmp;
	char *ptr;

	max = _strlen(s);
	ptr = s + max;

	for (i = 0; i < (max / 2); i++, ptr--)
	{
		tmp = *(s + i);
		*(s + i) = *ptr;
		*ptr = tmp;
	}
}
