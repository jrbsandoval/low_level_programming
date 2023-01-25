#include "main.h"

/**
 * _isalpha- function that checks for alphabetic character.
 * @c: argument type integer
 *
 * Return: 1 if c is a letter or 0 otherwise
 */

int _isalpha(int c)
{
	int i = 65, res = 0;

	while (i <= 122)
	{
		if (c == i)
		{
			res = 1;
			break;
		}
		i++;
	}
	return (res);
}
