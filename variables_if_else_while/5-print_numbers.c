#include <stdio.h>

/**
 *main- Program that prints all single digit numbers of base 10 starting from 0
 *	followed by a new line
 *
 *Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar(10);
	return (0);
}
