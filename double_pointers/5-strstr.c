#include "main.h"

/**
* _strstr- function that locates a substring.
* @haystack: string to testing
* @needle: pattern to search
*
* Return: A pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
  char **ptr, **ptr2;

  ptr = &haystack;
  ptr2 = &needle;

  while (*(*ptr))
  {
    if (*(*ptr) == *(*ptr2))
      return (*ptr2);
    (*ptr)++;
  }

  return (NULL);
}
