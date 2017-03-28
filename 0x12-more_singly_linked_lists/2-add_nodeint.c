#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of linked list
 * @head: pointer to the address of the pointer to head
 * @n: input value
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	if (head != NULL)
	{
		*head = newnode;
		return (newnode);
	}
	return (*head);
}
