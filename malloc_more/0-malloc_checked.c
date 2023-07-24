#include "main.h"

/**
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	void *buffer = NULL;

	buffer = malloc(b);
	if (buffer == NULL)
		exit(98);

	return (buffer);
}
