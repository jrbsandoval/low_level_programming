#include <stdio.h>

/**
 *main- Program that prints the alphabet in lowercase, followed by a new line.
 *	Print all the letters except q and e
 *	You can only use the putchar function
 *	All your code should be in the main function
 *	You can only use putchar twice in your code
 *
 *Return: Always 0.
 */

int main(void)
{
	char init_alp = 97;

	for (; init_alp <= 122; init_alp++)
		if (init_alp != 101 && init_alp != 113)
			putchar(init_alp);
	putchar(10);
	return (0);
}
