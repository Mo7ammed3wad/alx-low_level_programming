#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * str_concat.
 */

char *str_concat(char *s1, char *s2)
{
	int v, k, ln1, ln2, ln;
	char *result;

	ln1 = ln2 = 0;

	if (s1 != NULL)
	{
		v = 0;
		while (s1[v++] != '\0')
			ln1++;
	}

	if (s2 != NULL)
	{
		v = 0;
		while (s2[v++] != '\0')
			ln2++;
	}

	ln = ln1 + ln2;
	result = (char *)malloc(sizeof(char) * (ln + 1));
	if (result == NULL)
		return (NULL);

	for (v = 0; v < ln1; v++)
		result[v] = s1[v];
	for (k = 0; k < ln2; k++, v++)
		result[v] = s2[k];
	result[ln] = '\0';

	return (result);
}
