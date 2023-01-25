#include "main.h"

/**
 *print_alphabet- function that prints the alphabet, in lowercase
 *
 */

void print_alphabet(void)
{
	char laeasy[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	i = 0;

	while (laeasy[i])
	{
		_putchar(laeasy[i]);
		i++;
	}
}
