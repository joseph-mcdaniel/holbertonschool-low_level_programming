#include "lists.h"
/**
 * _strlen - return length of
 * string
 * @s: input value
 *
 * Return: void
 */
int _strlen(const char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * add_node_end - add node to end of linked list
 * @head: linked list double pointer
 * @str: duplicated string
 *
 * Return: newnode address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *tempnode;

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	tempnode = *head;
	while (tempnode->next != NULL)
		tempnode = tempnode->next;
	tempnode->next = newnode;
	return (newnode);
}
