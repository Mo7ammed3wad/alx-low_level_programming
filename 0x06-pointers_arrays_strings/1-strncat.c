#include "main.h"
#include <string.h>

/**
 function that concatenates two strings.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int x = 0;

	while (x < n && *src)
	{
		dest[index + x] = *src;
		src++;
		x++;
	}
	dest[index + x] = '\0';
	return (dest);
}
