#include "lists.h"
/**
 * print_listint - prints all the elements of linked list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
