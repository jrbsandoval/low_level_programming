#include "main.h"

/**
 * leet- function that encodes a string into 1337.
 * @s: parameter type pointer to char
 *
 * Requirement: -can only use one if in your code
 *		-only use two loops in your code
 *		-not allowed to use switch
 *		-not allowed to use any ternary operation
 *
 * Return: pointer to char
 */

char *leet(char *s)
{
	int i, len, j;
	char array[] = {'a', 'e', 'o', 't', 'l'};
	char arrayTwo[] = {'A', 'E', 'O', 'T', 'L'};
	char patron[] = {'4', '3', '0', '7', '1'};

	/*cantidad de elementos a comparar*/
	len = 5;
	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; j < len; j++)
			if (*(s + i) == array[j] || *(s + i) == arrayTwo[j])
				*(s + i) = patron[j];

	return (s);
}
