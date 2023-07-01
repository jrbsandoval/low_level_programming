#include "main.h"
#include <stdio.h>

/**
* _strspn- function that gets the length of a prefix substring.
* @s: buffer to comparate
* @accept: bytes to comparate
*
* Return: gets the length of a prefix substring.
*/

unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, count, p, len;
  char **ptr, **ptr2;

  ptr = &s;
  ptr2 = &accept;
  len = _strlen(accept);

  count = 0;
  while (*(*ptr) != '\0')
  {
    i = 0;
    p = 0;
    while (*(*ptr2 + p) != '\0')
    {
      if (*(*ptr) != *(*ptr2 + p))
        i++;
      else
        {
        count++;
        break;
      }
      if (*(*ptr) != *(*ptr2 + p) && i == len)
        return (count);
      p++;
    }
    (*ptr)++, i++;
  }
  return (i);
}
