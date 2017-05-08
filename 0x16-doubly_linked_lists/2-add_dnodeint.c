#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of linked list
 * @head: head node
 * @n: input val
 *
 * Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
