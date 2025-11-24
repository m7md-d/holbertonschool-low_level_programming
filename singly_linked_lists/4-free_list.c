#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list of type list_t
 * @head: pointer to the head of the list
 *
 * Description: Frees each node in the linked list, including
 *              the duplicated string stored in each node.
 */
void free_list(list_t *head)
{
	list_t *i, *j;

	if (!head)
		return;
	if (!head->next)
	{
		free(head->str);
		free(head);
		return;
	}

	i = head;
	j = i->next;
	while(i)
	{
		free(i->str);
		free(i);
		i = j;
		if (j)
			j = j->next;
	}
}
