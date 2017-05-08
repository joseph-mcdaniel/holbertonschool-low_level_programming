#include "lists.h"
/**
 * dlistint_len - return number of elements in linked list
 * @h: head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
