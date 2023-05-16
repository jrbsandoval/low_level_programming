#include "main.h"

/**
 * rot13- function that encodes a string using Rot13.
 * @s: parameter type pointer to char
 *
 * Requirement: -can only use one if in your code
 *		-only use two loops in your code
 *		-not allowed to use switch
 *		-not allowed to use any ternary operation
 *
 * Return: pointer to char
 */

char *rot13(char *s)
{
	int i, j, len;
	char imput[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char salida[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	len = 52;
	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; j < len; j++)
			if (*(s + i) == imput[j])
			{
				*(s + i) = salida[j];
				break;
			}
	return (s);
}
