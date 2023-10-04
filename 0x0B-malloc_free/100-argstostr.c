#include "main.h"
#include <stdlib.h>

/**
 * argstostr.
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int v, m, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (v = 0; v < ac; v++)
	{
		s = av[i];
		m = 0;

		while (s[m++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (v = 0, m = 0; v < ac && m < len; v++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[m] = s[k];
			k++;
			m++;
		}
		str[m++] = '\n';
	}
	str[m] = '\0';

	return (str);
}
