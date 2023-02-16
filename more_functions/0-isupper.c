#include "main.h"

/**
 * _isupper- funcion que verifica el caracter en mayusculas y deacuerdo a eso
 * @c: parameter type integer to review
 * Return: if is uppercase 1
 * othercase 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
