#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t v;
	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (v = 0; v < size - 1; v++)
		newlist[v] = list[v];
	newlist[v] = new;
	free(list);
	return (newlist);
}

size_t print_listint_safe(const listint_t *head)
{
	size_t x, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < num; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
