#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _atoi(char *s)
{
	int v, x, n, len, g, digit;

	v = 0;
	x = 0;
	n = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (v < len && g == 0)
	{
		if (s[v] == '-')
			++x;

		if (s[v] >= '0' && s[v] <= '9')
		{
			digit = s[v] - '0';
			if (x % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[v + 1] < '0' || s[v + 1] > '9')
				break;
			g = 0;
		}
		v++;
	}

	if (g == 0)
		return (0);

	return (n);
}


int main(int argc, char *argv[])
{
	int sum, n, a, j, k;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (j = 0; argv[a][j] != '\0'; j++)
		{
			if (argv[a][j] > '9' || argv[a][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		n = _atoi(argv[k]);
		if (n >= 0)
		{
			sum += n;
		}
	}

	printf("%d\n", sum);
	return (0);
}
