#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d;

	if (*head == NULL)
		return (0);

	tmp = *head;
	d = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (d);
}
