#include "main.h"

/**
 * _strcpy- function that copies the string pointed to by src to the buffer
 *	    pointed to by dest
 * @dest: first parameter type pointer to char
 * @src: second parameter type pointer to char
 *
 * Return: pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; (*(dest + i) = *(src + i)) != '\0'; i++)
		;
	return (dest - i);
}
