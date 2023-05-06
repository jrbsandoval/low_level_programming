#include "main.h"

/**
 * _strcmp- function that compares two strings.
 * @s1: first parameter type pointer to char
 * @s2: second parameter type pointer to char
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);
	return (*s1 - *s2);
}
