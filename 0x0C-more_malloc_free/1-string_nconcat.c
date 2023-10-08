#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int v = 0, j = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		s = malloc(sizeof(char) * (ln1 + n + 1));
	else
		s = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!s)
		return (NULL);

	while (v < ln1)
	{
		s[v] = s1[v];
		v++;
	}

	while (n < ln2 && v < (ln1 + n))
		s[v++] = s2[j++];

	while (n >= ln2 && v < (ln1 + ln2))
		s[v++] = s2[j++];

	s[v] = '\0';

	return (s);
}
