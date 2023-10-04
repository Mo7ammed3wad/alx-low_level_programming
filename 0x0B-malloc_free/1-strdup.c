#include <stdlib.h>
#include "main.h"

/**
 * _strdup.
 */

char *_strdup(char *str)
{
	char *cp;
	unsigned int n, ln;

	n = 0;
	ln = 0;

	if (str == NULL)
		return (NULL);

	while (str[ln])
		ln++;

	cp = malloc(sizeof(char) * (ln + 1));

	if (cp == NULL)
		return (NULL);

	while ((cp[n] = str[n]) != '\0')
		n++;

	return (cp);
}
