#include "main.h"

/**
 *function that copies a string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int h;

	h = 0;

	while (src[h] != '\0' && h < n)
	{
		dest[h] = src[h];
		h++;
	}

	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}

	return (dest);
}
