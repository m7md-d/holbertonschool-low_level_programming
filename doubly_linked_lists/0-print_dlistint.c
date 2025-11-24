#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes printed
 *
 * Description: Iterates through a doubly linked list and prints
 *              the 'n' value of each node. Uses a const pointer
 *              to avoid modifying the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *i = h;

	while (i)
	{
		printf("%d\n", i->n);
		len++;
		i = i->next;
		if (i == h)
			break;
	}
	return (len);
}
