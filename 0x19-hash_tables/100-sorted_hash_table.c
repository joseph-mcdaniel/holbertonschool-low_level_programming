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

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table->array == NULL)
		return (NULL);

	hash_table->shead = NULL;
	hash_table->stail = NULL;

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(shash_node_t));
	if (hash_table == NULL)
		return (NULL);

	return (hash_table);
}

/**
 * table_size - returns the size of a shash_table_t
 *
 * @ht: ht to get size of
 * Return: returns total size
 */
int table_size(shash_table_t *ht)
{
	unsigned int i;
	int total;

	for (i = 0, total = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
			total++;
	return (total);
}

/**
 * table_set - sets a value to a key in a shash_table_t
 *
 * @ht: shash_table_t
 * @key: key for bucket
 * @value: value for bucket
 * Return: Returns 1 on success, 0 otherwise
 */
shash_node_t *table_up(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			temp = temp->next;
		}

		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (node);
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

	/* get key_index */
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (strcmp((ht->array[index])->value, value) == 0)
			return (1);
	}
	node = table_up(ht, key, value);
	if (node == NULL)
		return (0);

	node->snext = NULL;
	node->sprev = NULL;

	if (table_size(ht) == 1)
	{
		ht->shead = node;
		ht->stail = node;
		return (1);
	}

	temp = ht->shead;

	if (key[0] < temp->key[0])
	{
		node->snext = ht->shead;
		(ht->shead)->sprev = node;
		ht->shead = node;
		return (1);
	}

	temp = sort(temp, key, node);
	if (temp == NULL)
		return (1);
	node->snext = temp;
	node->sprev = temp->sprev;
	(temp->sprev)->snext = node;
	temp->sprev = node;

	return (1);
}

shash_node_t *sort(shash_node_t *temp, const char *key, shash_node_t *node)
{
	int index;

	index = 0;
	while (tolower(temp->key[index]) <= tolower(key[index]))
	{
		if (tolower(temp->key[index]) == tolower(key[index]))
		{
			index++;
			if (key[index] == '\0')
			{
				index = 0;
				temp = temp->snext;
			}

			if (temp->key[index] == '\0')
				break;
		}
		else
		{
			if (temp->snext == NULL)
			{
				temp->snext = node;
				node->sprev = temp;
				return (NULL);
			}
			temp = temp->snext;
			temp = 0;
		}
	}
	return (temp);
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

/**
 * shash_table_print - print hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

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
		for (temp = ht->shead; temp != NULL; temp = temp->snext)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key,
			       shash_table_get(ht, temp->key));
			comma = 1;
		}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints hash table in reverse
 *
 * @ht: hash table
 * Return: void
 */
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
		for (temp = ht->shead; temp != NULL; temp = temp->sprev)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key,
			       shash_table_get(ht, temp->key));
			comma  = 1;
		}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
