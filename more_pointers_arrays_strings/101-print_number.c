#include "main.h"

/**
 * print_number- function that prints an integer.
 * @n: parameter type int
 *
 * Requirement: -only use _putchar function to print
 *		-not allowed to use long
 *		-not allowed to use arrays or pointers
 *		-not allowed to hard-code special values
 *
 * Return: void
 */

void print_number(int n)
{
	char str[100];
	int len = _strlen(_itoa(n, str)), i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);
}
