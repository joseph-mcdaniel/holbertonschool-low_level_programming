#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at a given position
 * @head: pointer to the address of a pointer to head
 * @idx: index
 * @n: input value
 *
 * Return: address of the new node, or nulll if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int count;

	newnode->n = n;
	newnode->next = 0;

	if (temp == NULL && idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (NULL);
	}
	for (count = 1; temp != NULL && count <= idx; count++)
	{
		if (count == idx)
		{
			newnode->next = temp->next;
			temp->next = newnode;
		}
		else
		{
			temp = temp->next;
		}
	}
	if (newnode == NULL)
		return (NULL);
	return (newnode);
}
