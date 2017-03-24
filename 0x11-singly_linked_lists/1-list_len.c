#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of element
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
