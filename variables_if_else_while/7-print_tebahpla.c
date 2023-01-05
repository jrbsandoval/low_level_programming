#include <stdio.h>

/**
 *main- program that prints the lowercase alphabet in reverse,
 *	followed by a new line
 *	use the putchar function
 *	use putchar twice in your code
 *
 *Return: Always 0.
 */

int main(void)
{
	char end_alp_low = 122;

	for (; end_alp_low >= 97; end_alp_low--)
		putchar(end_alp_low);
	putchar(10);
	return (0);
}
