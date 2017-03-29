#include "lists.h"
/**
 * print_listint_safe - print linked list
 * @head: pointer to head
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head, *temp_next;
	int i = 0, j;

	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		temp_next = head;
		i++;
		j = 0;
		while (j < i)
		{
			if (tmp == temp_next)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				exit(98);
				return (i);
			}
			temp_next = temp_next->next;
			j++;
		}
	}
	return (i);
}
