#include "lists.h"
/**
 * free_list - free linked list
 * @head: address of the start of linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tempnode;

	while (head != NULL)
	{
		tempnode = head;
		head = head->next;
		free(tempnode->str);
		free(tempnode);
	}
}
