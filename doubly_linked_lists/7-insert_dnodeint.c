#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double pointer to the head of the dlistint_t list.
 * @idx: The index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: The integer data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx && tmp; i++)
		tmp = tmp->next;

	if (!tmp && idx > i)
		return (NULL);

	if (!tmp && idx == i)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = tmp->prev;
	new->next = tmp;
	new->n = n;
	if (tmp->prev)
		tmp->prev->next = new;
	tmp->prev = new;

	return (*h);
}
