#include "lists.h"
#include <stdlib.h>

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	while (x < index && head != NULL)
	{
		head = head->next;
		x++;
	}
	if (x == index)
		return (head);
	return (NULL);
}
