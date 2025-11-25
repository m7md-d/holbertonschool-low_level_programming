#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list at a given index.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to locate (starting from 0).
 *
 * Return: The address of the located node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (!head)
		return (NULL);
	tmp = head;
	for(i = 0; tmp; i++)
	{
		if (i == index)
		{
			if (tmp)
				return (tmp);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
