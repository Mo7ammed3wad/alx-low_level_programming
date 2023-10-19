#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *n_node, *temp;

	while (str[l])
		l++;
	n_node = malloc(sizeof(list_t));

	if (!n_node)
		return (NULL);

	n_node->str = strdup(str);
	n_node->l = l;
	n_node->next = NULL;

	if (*head == NULL)
		*head = n_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n_node;
	}

	return (n_node);
}
