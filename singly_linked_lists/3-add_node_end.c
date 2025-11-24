#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *copy;
	list_t *new, *i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len] != '\0')
		len++;

	new->str = copy;
	new->len = len;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	i = *head;
	while (i->next != NULL)
		i = i->next;

	i->next = new;

	return (new);
}
