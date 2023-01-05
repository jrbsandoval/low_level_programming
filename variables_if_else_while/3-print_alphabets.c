#include <stdio.h>

/**
 *main- program that prints the alphabet in lowercase, and then in uppercase,
 *	followed by a new line.
 *
 *Return: Always 0.
 */

int main(void)
{
	char init_alp_min = 97;
	char init_alp_may = 65;

	for (; init_alp_may <= 90; init_alp_may++)
	{
		for (; init_alp_min <= 122; init_alp_min++)
			putchar(init_alp_min);
		putchar(init_alp_may);
	}
	putchar(10);
	return (0);
}
