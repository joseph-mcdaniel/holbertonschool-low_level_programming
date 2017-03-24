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
 * add_node - add new node
 * @head: double pointer
 * @str: string
 *
 * Return: single pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *freshnode = malloc(sizeof(list_t));

	freshnode->str = strdup(str);
	freshnode->len = _strlen(str);
	freshnode->next = *head;
	*head = freshnode;
	if (head != NULL)
	{
		*head = freshnode;
		return(freshnode);
	}

	return (*head);
}
