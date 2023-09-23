#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 */

int _strcmp(char *s1, char *s2)
{
	int mod = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		mod = *s1 - *s2;

	return (mod);
}
