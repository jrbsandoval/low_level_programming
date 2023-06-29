#include "main.h"
#include <stdio.h>

/**
* _memcpy- function that copies memory area.
* @dest: memory area of destiny
* @src: bytes from memory area
* @n: bytes to copy
*
* Return: pointer to buffer copied
* or return NULL in case failed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  char **ptr;
  ptr = &dest;

  for (i = 0; i < n; i++)
    *(*ptr + i) = *(src + i);

  return (*ptr - i);
}
