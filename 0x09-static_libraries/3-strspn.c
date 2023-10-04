#include "main.h"
/**
* _strspn.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				d++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (d);
}
