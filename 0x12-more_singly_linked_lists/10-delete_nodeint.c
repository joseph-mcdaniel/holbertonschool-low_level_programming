#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at the index of linked list
 * @head: pointer to the address of a pointer to head
 * @index: index
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i;

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
