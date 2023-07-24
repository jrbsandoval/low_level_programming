#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc < 1)
	{
		printf("not parameters!\n");
	}
	else
	{
		for(i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
