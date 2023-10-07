#include <stdio.h>
#include <stdlib.h>

/**
 * add.
 */

int main(int argc, char **argv)
{
	int x, o, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		n = strtol(argv[x], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += o;
		}
	}
	printf("%d\n", sum);

	return (0);
}
