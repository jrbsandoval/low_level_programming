#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *buffer = NULL;
	int len_s1, len_s2, i, p, size;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	size = len_s1 + len_s2;

	if ((buffer = malloc(sizeof(char) * size)) == NULL)
		return (NULL);

	i = 0;
	while ((buffer[i] = s1[i]) != '\0')
		++i;
	
	p = 0;
	while ((buffer[i] = s2[p]) != '\0')
		i++, p++;

	buffer[i] = '\0';

	return (buffer);
}
