#include "main.h"

/**
* _memset- function that fills memory with a constant byte.
* @s: buffer to store
* @b: byte to fills
* @n: number of elements to fills
*
* Return: pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  char **ptr;

  ptr = &s;

  for (i = 0; i < n; i++)
  {
    *(*ptr + i) = b;
  }

  return (*ptr - i);
}
