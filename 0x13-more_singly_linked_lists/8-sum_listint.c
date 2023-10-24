#include "lists.h"
#include <stdlib.h>

int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
