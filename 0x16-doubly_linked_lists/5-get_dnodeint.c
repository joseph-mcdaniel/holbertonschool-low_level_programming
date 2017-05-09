#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of linked list
 * @head: head node
 * @index: index of node
 *
 * Return: returns the nth node, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
