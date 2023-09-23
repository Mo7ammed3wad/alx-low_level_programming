#include "main.h"

/**
 * function that concatenates two strings.
 */

char *_strcat(char *dest, char *src)
{
	int v;
	int c;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[v] = src[c];
		v++;
		c++;
	}
	dest[v] = '\0';
	return (dest);
	printf ("\n");
}
