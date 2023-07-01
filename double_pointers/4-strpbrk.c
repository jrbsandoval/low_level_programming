#include "main.h"

/**
* _strpbrk- function that searches a string for any of a set of bytes.
* @s: string to comparate
* @accept: pattern to search
*
* Return: pointer to the byte in s that matches one of the bytes in accept, 
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
  unsigned int i;
  char **ptr, **ptr2, *none;

  none = NULL;
  ptr = &s;
  ptr2 = &accept;

  while (*(*ptr) != '\0')
  {
    i = 0;
    while (*(*ptr2 + i) != '\0')
    {
      if (*(*ptr) == *(*ptr2 + i))
        return (*(ptr));
      i++;
    }
    (*ptr)++;
  }
  return (none);
}
