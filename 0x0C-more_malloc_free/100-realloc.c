#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int l, m = new_size;
	char *oldp = ptr;
	char *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (l = 0; l < n; l++)
		p[l] = oldp[l];
	free(ptr);
	return (p);
}
