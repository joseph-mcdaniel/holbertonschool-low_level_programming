#include "lists.h"
/**
 * add_dnodeint_end - adds new node at end of linked list
 * @head: head node
 * @n: input val
 *
 * Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tempnode;

	newnode = malloc(sizeof(dlistint_t));
	tempnode = *head;

	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		return (newnode);
	}
	newnode->n = n;
	newnode->next = NULL;

	while (tempnode->next != NULL)
	{
		tempnode = tempnode->next;
	}
	tempnode->next = newnode;
	newnode->prev = tempnode;

	return (newnode);
}
