#include "lists.h"
#include <stdio.h>
/**
 * print_list - print elements of a list
 * @h: linked list input val
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
