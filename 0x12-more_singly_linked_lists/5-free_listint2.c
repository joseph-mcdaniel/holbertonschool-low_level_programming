#include "lists.h"
/**
 * free_listint2 - free a linked list
 * @head: pointer to the address of a pointer to head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	while (*head != NULL)
	{
		tempnode = *head;
		*head = (*head)->next;
		free(tempnode);
	}
	*head = NULL;
}
