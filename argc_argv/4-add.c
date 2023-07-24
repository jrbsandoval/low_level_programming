#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i, res;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > '0' && *argv[i] < '9')
				res += _atoi(argv[i]);
			else
			{
				printf("Error!\n");
				return (1);
			}
		}
		printf("%d", res);
		printf("\n");
	}
	else
		printf("0\n");
	return (0);

}
