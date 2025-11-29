#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Double pointer to the head of the dlistint_t list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = *head;

	if (!*head)
		return (-1);

	for (i = 0; i < index && tmp; i++)
		tmp = tmp->next;

	if (!tmp && index != i)
		return (-1);

	if (index == 0 && tmp)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	if (!tmp)
		return (-1);

	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);
}
