#include <stdlib.h>
#include "main.h"

/**
 * create_array.
 */

char *create_array(unsigned int size, char c)
{
	char *h;
	unsigned int v;

	h = (char *)malloc(size * sizeof(char));

	if (size <= 0 || h == 0)
		return (0);

	v = 0;
	while (v < size)
	{
		h[v] = c;
		v++;
	}
	return (h);
}
