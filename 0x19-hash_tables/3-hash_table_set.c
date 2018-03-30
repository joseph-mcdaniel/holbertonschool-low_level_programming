#include "hash_tables.h"
/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table to add/update
 * @key: key (cannot be empty string)
 * @value: value associated with can (can be empty string)
 *
 * Return: 1 if successful, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newnode, *temp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	/* get key index, store it in temp */
	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	/* allocate node */
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	/* duplicate key to new node */
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}

	/*duplicate value to new node */
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode; /* add new node at beginnging of list */
	return (1);
}
