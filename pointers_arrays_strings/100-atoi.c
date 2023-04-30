#include "main.h"

/**
 * _atoi- function that convert a string to an integer
 * @s: parameter type pointer to char
 *
 * Return: int
 */

int _atoi(char *s)
{
	int value, n;
	char *ptr, *tmp;

	n = 0;
	value = positive_negative(s);
	ptr = s;

	/* Condicion para valores positivos*/
	if (value == 0)
	{
		for (; *ptr != '\0'; ptr++)
			if (*ptr >= '0' && *ptr <= '9')
				n = (10 * n) + (*ptr - '0');
		return (n);
	}

	/* Condicion para valores negativos*/
	if (value == 1)
	{
		tmp = ptr;
		for (; *ptr != '\0'; ptr++)
		{
			if (*ptr >= '0' && *ptr <= '9')
				n = (10 * n) + (*ptr - '0');
			/* Condicion para tomar el primer numero*/
			if (*tmp >= '0' && *tmp <= '9' && *ptr == ' ')
				break;
			tmp = ptr;
		}
		return (n * -1);
	}
	if (value == 2)
		return (0);
	return (-1);
}
