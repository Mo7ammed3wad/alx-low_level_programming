#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	if (head == NULL)
		return (NULL);
	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
