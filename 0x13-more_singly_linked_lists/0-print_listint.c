#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t l;

	for (l = 0; h != NULL; l++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (l);
}
