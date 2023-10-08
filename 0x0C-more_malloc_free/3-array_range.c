#include <stdlib.h>
#include "main.h"

/**
 * array_range.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int g, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	ptr = malloc(sizeof(int) * s);

	if (ptr == NULL)
		return (NULL);

	for (g = 0; min <= max; g++)
		ptr[g] = min++;

	return (ptr);
}
