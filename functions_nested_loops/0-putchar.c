#include "main.h"


/**
 *
 *
 *
 *
 */

int main(void)
{
	char phrase[] = "_putchar";
	int tmp = strlen(phrase), i;

	for (i = 0; i < tmp; i++)
		_putchar(phrase[i]);
	_putchar('\n');
	return (0);
}
