#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fl = n ^ m;
	int c = 0;

	while (fl)
	{
		if (fl & 1)
			c++;
		fl >>= 1;
	}
	return (c);
}
