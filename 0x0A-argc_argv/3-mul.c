#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * mul.
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
