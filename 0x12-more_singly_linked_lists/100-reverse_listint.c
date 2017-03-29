#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the address of a pointer to head
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = before->next;
		current->next = before;
		before = current;
		current = next;
	}
	*head = before;
	return (current);
}
