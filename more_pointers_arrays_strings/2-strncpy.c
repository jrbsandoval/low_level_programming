#include "main.h"

/**
 * _strncpy- function that copies a string.
 * @dest: first parameter type pointer to char
 * @src: second parameter type pointer to char
 * @n: third parameter type integer
 *
 * Return: return type date pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	if (n > 0)
	{
		for (i = 0; (*(dest + i) = *(src + i)) != '\0' && i < n; i++)
			;
		for (; i < n; i++)
			*(dest + i) = '\0';
	}

	return (tmp);
}
