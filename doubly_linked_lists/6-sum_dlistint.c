#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data (n) of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: The sum of all 'n' values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
