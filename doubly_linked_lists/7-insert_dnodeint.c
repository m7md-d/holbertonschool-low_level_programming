#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list.
 * @h: A double pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added (starts at 0).
 * @n: The integer data (n) for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	if (!h)
		return (NULL);
	tmp = *h;
	new->n = n;
	for (i = 0; tmp; i++)
	{
		if (i == idx)
		{
			if (tmp)
			{
				new->next = tmp;
				new->prev = tmp->prev;
				tmp->prev->next = new;
				return (new);
			}
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
