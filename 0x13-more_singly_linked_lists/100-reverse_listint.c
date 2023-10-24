#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
    listint_t *pr = NULL;
    listint_t *n = NULL;

    while (*head)
    {
        n = (*head)->n;
        (*head)->n = pr;
        pr = *head;
        *head = n;
    }

    *head = pr;

    return (*head);
}
