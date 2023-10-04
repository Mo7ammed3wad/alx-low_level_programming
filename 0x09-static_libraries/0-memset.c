#include "main.h"

/**
 * _memset.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		s[v] = b;
	}
	return (s);
}
