#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int v;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (v = 0; v < min(old_size, new_size); v++)
				*((char *)temp_block + v) = *((char *) ptr + v);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
