#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t o;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (o = 0; o < size - 1; o++)
		newlist[o] = list[o];
	newlist[o] = new;
	free(list);
	return (newlist);
}

size_t free_listint_safe(listint_t **head)
{
	size_t i, n = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (n);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (n);
			}
		}
		n++;
		list = _ra(list, n, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (n);
}
