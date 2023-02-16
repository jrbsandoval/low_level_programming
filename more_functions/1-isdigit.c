#include "main.h"

/**
 * _isdigit- function that checks for a digit (0 through 9).
 * @c: parameter type integer to check
 *
 * Return: 1 if c, is an digit
 * or 0 othercase.
 */

int _isdigit(int c)
{
	int result = 0;

	result = (c >= 48 && c <= 57) ? 1 : 0;
	return (result);
}
