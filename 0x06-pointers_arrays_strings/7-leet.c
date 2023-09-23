#include "main.h"
/**
 * leet.
 */
char *leet(char *s)
{
	int h;
	int v;
	int o;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	h = 0;
	while (s[h] != '\0')
	{
		v = 0;
		o = 0;
		while (l[v] != '\0')
		{
			if (s[h] == l[v])
			{
				o = v;
				s[h] = e[o];
			}
			v++;
		}
		h++;
	}
	return (s);
}
