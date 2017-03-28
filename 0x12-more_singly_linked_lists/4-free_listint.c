#include "lists.h"
/**
 * free_listint - Free linked list
 * @head: pointer to head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tempnode;

	while (head != NULL)
	{
		tempnode = head;
		head = head->next;
		free(tempnode);
	}
}
