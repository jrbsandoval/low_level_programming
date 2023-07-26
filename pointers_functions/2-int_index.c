#include "function_pointers.h"

/**
 *
 *
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/* condicion que dicta si la comparacion tuvo exito*/
		if (cmp(array[i]) == 1)
			break;
		/* condicion para saber si no hubo comparaciones en el array*/
		if ((i + 1) == size)
			return (-1);
	}
	return (i);
}
