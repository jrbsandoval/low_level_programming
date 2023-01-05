#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- Program will assign a random number to the var n each time it is execut
 *
 *Return: Always 0.
 */

int main(void)
{
	int n, residuo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	residuo = n % 10;

	printf("The last digit of %d is ", n);
	if (residuo > 5)
		printf("%d and is greater than 5\n", residuo);
	else if (residuo < 6 && residuo != 0)
		printf("%d and is less than 6 and not 0\n", residuo);
	else if (residuo == 0)
		printf("%d and is 0\n", residuo);
	return (0);
}
