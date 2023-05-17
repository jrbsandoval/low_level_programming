#include "main.h"

/**
 * _strlen- function that returns the length of an string
 * @s: parameter type pointer to char
 *
 * Return: length string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	return (i);
}
