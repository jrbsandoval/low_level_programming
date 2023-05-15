#include "main.h"

/**
 * cap_string- function that capitalizes all words of a string.
 * @s: parameter type pointer to char
 *
 * Return: an pointer to char.
 */

char *cap_string(char *s)
{
	char patron[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'};
	char *ptr = s;
	int i, j;

	if (s != NULL)
	{
		for (i = 0; *(s + i) != '\0'; i++)
		{
			for (j = 0; patron[j] != '\0'; j++)
			{
				if ((*(s + i) >= 'a' && *(s + i) <= 'z') && *ptr == patron[j])
					*(s + i) = *(s + i) - 32;
				if (*(s + i) == '\t')
					*(s + i) = ' ';
			}
			ptr = s + i;
		}
	}
	return (s);
}
