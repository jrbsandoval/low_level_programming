#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error!\n");
		return (-1);
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
