#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i, *j;

	if (!head)
		return;
	if (!head->next)
	{
		free(head);
		return;
	}

	i = head;
	j = i->next;
	while (i)
	{
		free(i);
		i = j;
		if (j)
			j = j->next;
	}
}
