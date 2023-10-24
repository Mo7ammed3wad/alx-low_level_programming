#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t l;

	for (l = 0; h != NULL; l++)
	{
		h = h->next;
	}
	return (l);
}
