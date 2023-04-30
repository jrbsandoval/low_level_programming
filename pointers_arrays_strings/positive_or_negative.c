#include "main.h"

/**
 * positive_negative- function that takes a string of characters and selects
 *			the numbers in the string
 * @s: parameter type pointer to char
 *
 * Return: an integer
 */

int positive_negative(char *s)
{
	char *ptr;
	char *ptr_pas;
	int res;

	res = 0;
	ptr = s;
	ptr_pas = ptr;
	for (;*ptr != '\0'; ++ptr)
	{
		/*valor 0*/
		if (*ptr == '0')
		{
			res = 2;
			break;
		}
		/* condicion para saber si el numero es negativo*/
		else if (*ptr >= '0' && *ptr <= '9' && *ptr_pas == '-')
		{
			res = 1;
			break;
		}
		/* condicion para saber si el numero es positivo*/
		else if (*ptr >= '0' && *ptr <= '9')
		{
			res = 0;
			break;
		}
		ptr_pas = ptr;
	}
	return (res);
}

