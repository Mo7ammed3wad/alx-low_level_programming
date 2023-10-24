#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int x = 0;
	listint_t *tmp, *tmp2;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (x < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		x++;
	}
	if (x != (index - 1) || tmp->next == NULL)
		return (-1);
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}
