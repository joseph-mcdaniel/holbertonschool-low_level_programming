#include "lists.h"
/**
 * pop_listint - Delete the head node of linked list
 * @head: pointer to the address of a pointer to head
 *
 * Return: returns the head node's data, n
 */
int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int data;

	if (head != NULL && *head != NULL)
	{
		tempnode = *head;
		*head = (*head)->next;
		data = tempnode->n;
		free(tempnode);
		return (data);
	}
	else
	{
		return (0);
	}
}
