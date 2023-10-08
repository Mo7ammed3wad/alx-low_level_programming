#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr != NULL)
		return (ptr);

	exit(98);
}
