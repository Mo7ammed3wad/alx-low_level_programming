#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	t = h = head;
	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;
		if (t == h)
		{
			t = head;
			break;
		}
	}
	if (!t || !h || !h->next)
		return (NULL);
	while (t != h)
	{
		t = t->next;
		h = h->next;
	}
	return (h);
}
