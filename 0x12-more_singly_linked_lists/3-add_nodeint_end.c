#include "lists.h"
/**
 * add_noteint_end - add new node at the end of linked list
 * @head: pointer to the address of a pointer to head
 * @n: input value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *tempnode;

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	tempnode = *head;
	while (tempnode->next != NULL)
	{
		tempnode = tempnode->next;
	}
	tempnode->next = newnode;
	return (newnode);
}
