#include "main.h"

/**
* _memset- function that fills memory with a constant byte. 
* @s: buffer. type date pointer to char
* @b: constant byte. Type date char
* @n: number of buffer to fills
*
* Return: an pointer to buffer resultant
*/

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  char **ptr;

  ptr = &s;

  for (i = 0; i < n; i++)
    *(*ptr + i) = b;

  return (*ptr - i);
}
