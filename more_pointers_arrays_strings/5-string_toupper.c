#include "main.h"

/**
 * string_toupper- function that changes all lowercase char's of a str to upper
 * @s: parameter type pointer to char
 *
 * Return: an data type pointer to char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 32;
	return (s);
}
