#include <stdio.h>

/**
 *main- program that prints all possible combinations of single-digit numbers.
 *	not allowed to use any variable of type char
 *	use the putchar function
 *	use putchar four times maximum in your code
 *	Numbers must be separated by (,) followed by a space
 *	Numbers should be printed in ascending order
 *	code should be in the main function
 *
 *Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
