#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The head of the list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (i);
}
