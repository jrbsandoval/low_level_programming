#include <stdio.h>

/**
 *main- program that prints the alphabet in lowercase, followed by a new line
 *
 *Return: Always 0.
 */

int main(void)
{
	char first_letter_alp = 96;

	while (first_letter_alp++ <= 121)
		putchar(first_letter_alp);
	putchar(10);
	return (0);
}
