#include "main.h"

/**
 * j_fizz_buzz- function that print the numbers from 1 to 100
 * Required: -multiples of three. replace the number for Fizz
 * - multiples of five print Buzz
 * - multiples of both three and five print FizzBuzz
 * Each number or word should be separated by a space
 * You are allowed to use the standard library
 */

void j_fizz_buzz(void)
{
	int n;
	char *word_one = "Fizz";
	char *word_two = "Buzz";
	char *word_tree = "FizzBuzz";

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("%s", word_tree);
		else if(n % 3 == 0)
			printf("%s", word_one);
		else if(n % 5 == 0)
			printf("%s", word_two);
		else
			printf("%d", n);
		printf(" ");
	}
	printf("\n");
}
