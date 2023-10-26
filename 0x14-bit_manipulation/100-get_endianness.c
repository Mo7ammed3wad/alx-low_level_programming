#include "main.h"

int get_endianness(void)
{
	unsigned int t = 1;
	char *e = (char *)&t;

	if (*e)
		return (1);
	return (0);

}
