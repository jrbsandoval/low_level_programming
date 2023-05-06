#include "main.h"

/**
 * _strncat-  function that concatenates two strings.
 * @dest: first parameter type pointer to char
 * @src: second parameter type pointer to char
 * @n: third parameter type integer
 *
 * Return: return an type pointer to char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest = _strlen(dest);

	if (n > 0)
		for (i = 0; i < n && *src != '\0'; i++, src++, len_dest++)
			*(dest + len_dest) = *(src);
	return (dest);
}
