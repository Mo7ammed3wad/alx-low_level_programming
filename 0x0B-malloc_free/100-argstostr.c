#include "main.h"
#include <stdlib.h>

/**
 * argstostr.
 */

char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
		int g = 0, v = ac, n, sum = 0, temp = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);

		if (new_string != NULL)
		{
			while (g < v)
			{
				for (n = 0; av[g][n] != '\0'; n++)
					new_string[n + temp] = av[g][n];
				new_string[temp + n] = '\n';
				temp += (n + 1);
				g++;
			}
			new_string[temp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new_string);
}

int len(char *str)
{
		int len = 0;

		if (str != NULL)

		{
			while (str[len])
				len++;
		}

	return (len);
}
