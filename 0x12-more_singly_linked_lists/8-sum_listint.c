#include "lists.h"
/**
 * sum_listint - return the sum of all the data of linked list
 * @head: pointer to head
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
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
