#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *_strdup(char *str)
{
	char *buffer = NULL;
	
	int size, i;
	size = _strlen(str);

	if ((buffer = malloc(sizeof(char) * size)) == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(buffer + i) = *(str + i);
	*(buffer + i) = '\0';
	return (buffer);
}
