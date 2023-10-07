#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int n, k, r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && n >= 0; k++)
	{
		while (n >= coins[k])
		{
			r++;
			n -= coins[k];
		}
	}

	printf("%d\n", r);
	return (0);
}
