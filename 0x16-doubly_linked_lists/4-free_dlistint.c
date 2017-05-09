#include "lists.h"
/**
 * free_dlistint - free linked list
 * @head: head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempnode;

	while (head != NULL)
	{
		tempnode = head;
		head = head->next;

		free(tempnode);
	}
}
