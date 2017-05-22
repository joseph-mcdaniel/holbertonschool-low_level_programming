#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head node
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	*temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; temp != NULL && i < index - 1; i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
	}
	return (1);
}
