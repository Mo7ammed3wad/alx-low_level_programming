#include <stdlib.h>
#include "lists.h"

int _strlen(const char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}

list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *data;
	list_t *n;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	n = *head;
	data = malloc(sizeof(char) * (len + 1));
	if (data == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		data[i] = str[i];
	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		free(data);
		return (NULL);
	}
	n->str = data;
	n->len = len;
	n->next = *head;
	*head = n;
	return (n);
}
