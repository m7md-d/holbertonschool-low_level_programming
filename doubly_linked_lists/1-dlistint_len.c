#include "lists.h"

/**
 * dlistint_len - Calculates the number of elements in a
 * doubly circular linked list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *i = h;

	while (i)
	{
		len++;
		i = i->next;
		if (i == h)
			break;
	}
	return (len);
}
