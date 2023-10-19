#include "lists.h"

size_t list_len(const list_t *h)
	{
		size_t el = 0;
		while (h)
		{
			el++;
			h = h->next;
		}
		return (el);
	}
