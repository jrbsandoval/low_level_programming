#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- Program will assign a random number to the var n each time it is execut
 *
 *Return: Always 0.
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
