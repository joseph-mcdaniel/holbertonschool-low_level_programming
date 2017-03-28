#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to head
 * @index: index of the node, starting at zero
 *
 * Return: nth node, if node doesn't exist return null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
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
