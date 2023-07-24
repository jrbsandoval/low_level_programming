#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	char *buffer = NULL;
	unsigned int i;

	if ((buffer = malloc(sizeof(char) * size)) == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(buffer + i) = c;
	*(buffer + i) = '\0';
	return (buffer);
}
