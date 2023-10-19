#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int l;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (l = 0; str[l];)
		l++;

	new->str = dup;
	new->l = l;
	new->next = *head;

	*head = new;

	return (new);

}
