#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node anywhere
 * @h: head node
 * @idx: index
 * @n: input val
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	temp = *h;

	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	while (temp != NULL)
	{
		if (idx == count + 1)
		{
			newnode->next = temp->next;
			newnode->prev = temp->prev;
			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
