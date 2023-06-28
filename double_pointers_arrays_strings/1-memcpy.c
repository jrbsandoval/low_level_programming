#include "main.h"

/**
* _memcpy- function that copies memory area.
*
*
*
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  char **ptr, **tmp;

  ptr = &dest;
  tmp = &src;

  for (i = 0; i < n; i++)
  {
    *(*ptr + i) = *(*tmp + i);
  }
  return (*ptr - i);
}
