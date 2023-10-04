#include <stdlib.h>
#include "main.h"

/**
 * str_concat.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int m = 0,	n = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	s3 = malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		for (m = 0; m < ln1; m++)
			s3[m] = s1[m];
	}

	if (s2)
	{
		while (m < (ln1 + ln2))
		{
			s3[m] = s2[n];
			m++;
			n++;
		}
	}

	s3[i] = '\0';
	return (s3);
}
