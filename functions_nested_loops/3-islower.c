#include "main.h"

/**
 * _islower- function that checks for lowercase character
 * @c: parameter type integer
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise.
 */

int _islower(int c)
{
	int alpL_init_ascii = 97;
	int alpL_end_ascii = 122;
	int res = 0;

	while (alpL_init_ascii <= alpL_end_ascii)
	{
		if (c == alpL_init_ascii)
		{
			res = 1;
			break;
		}
		alpL_init_ascii++;
	}
	return (res);
}
