#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table->array == NULL)
		return (NULL);

	hash_table->shead = NULL;
	hash_table->stail = NULL;

	hash_table = malloc(sizeof(shash_node_t *) * size);
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	if (hash_table == NULL)
		return (NULL);

	return (hash_table);
}
/**
 * hash_table_set - adds an element to a sorted hash table
 * @ht: hash table to update
 * @key: key (sorted on ASCII value)
 * @value: value associated with key
 *
 * Return: 1 if successful, else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *temp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	/* get key_index */
	index = key_index((unsigned char *)key, ht->size);
	/* store it in temp */
	temp = ht->array[index];

	/* duplicate value if string matches */
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

	/* allocate space for node */
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);

	/* duplicate key to node */
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	/* duplicate value to node */
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	/* add new node at the beginning of list */
	ht->array[index] = node;
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key being searched for
 *
 * Return: value assocated with the element,
 * or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* get key_index */
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	/* traverse through array */
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	unsigned int comma;
	shash_node_t *temp;

	comma = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp != NULL; temp = temp->snext)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			comma = 1;
		}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	unsigned int comma;
	shash_node_t *temp;

	comma = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp != NULL; temp = temp->sprev)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			comma  = 1;
		}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node != NULL; )
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
