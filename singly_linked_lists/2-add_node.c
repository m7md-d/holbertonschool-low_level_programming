#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: pointer to the newly created node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = strlen(str);
	char *copy = strdup(str);
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (copy == NULL)
		return (NULL);

	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
