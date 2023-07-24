#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("Numero de argumentos pasados: %d\n", argc - 1);
	for (i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	printf("\n");
	return (0);
}
