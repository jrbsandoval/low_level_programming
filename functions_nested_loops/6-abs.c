#include "main.h"

/**
 * _abs- function that computes the absolute value of an integer.
 * @j: parameter type integer
 *
 * Return: Returns the absolute value of the integer argument
 */

int _abs(int j)
{
	int res = j;

	if (j < 0)
		res = j * (-1);

	return (res);
}
