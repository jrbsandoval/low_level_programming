#include <stdio.h>

/**
 *main- program that prints all the numbers of base 16 in lowercase,
 *	followed by a new line.
 *	use the putchar function
 *	code should be in the main function
 *	use putchar three times in your code
 *
 *Return: Always 0.
 */

int main(void)
{
	char init_alp_low = 97, i = 48;

	for (; init_alp_low <= 101; init_alp_low++)
	{
		for (; i <= 57; i++)
			putchar(i);
		putchar(init_alp_low);
	}
	putchar(10);
	return (0);
}
