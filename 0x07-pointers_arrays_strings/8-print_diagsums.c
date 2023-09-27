#include "main.h"
#include <stdio.h>

/**
 * print_diagsums.
 */

void print_diagsums(int *a, int size)
{
	int n, s1 = 0, s2 = 0;

	for (n = 0; n < size; n++)
	{
		s1 += *(a + (size * n + n));
		s2 += *(a + (size * n + size - 1 - n));
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
