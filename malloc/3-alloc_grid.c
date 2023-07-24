#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **buffer = NULL;


	if ((width && height) < 1)
		return (NULL);

	if ((buffer = malloc(sizeof(int) * height)) == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(buffer[j]);
			free(buffer);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}

	return (buffer);
}
