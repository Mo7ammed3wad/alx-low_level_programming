#include "main.h"

/**
 * string_toupper.
 */

char *string_toupper(char *n)
{
	int v;

	v = 0;
	while (n[v] != '\0')
	{
		if (n[v] >= 'a' && n[v] <= 'z')
			n[v] = n[v] - 32;
		v++;
	}
	return (n);
}
