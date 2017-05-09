#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data
 * @head: head node
 *
 * Return: sum, if empty 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
