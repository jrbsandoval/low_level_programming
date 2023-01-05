#include <stdio.h>

/**
 *main- program that prints all single digit numbers of base 10 starting from 0
 *	followed by a new line.
 *	You are not allowed to use any variable of type char
 *	You can only use the putchar function
 *	You can only use putchar twice in your code
 *	All your code should be in the main function
 *
 *Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar(10);
	return (0);
}
