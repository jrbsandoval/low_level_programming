#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 * @dest: first parameter type pointer to char
 * @src: second parameter type pointer to char
 *
 * Return: an pointer to char
 */


char *_strcat(char *dest, char *src)
{
	char *tmp = dest;
	int ancho_dest = _strlen(dest);

	for (; *src != '\0'; src++, ancho_dest++)
		*(dest + ancho_dest) = *src;

	return (tmp);
}
