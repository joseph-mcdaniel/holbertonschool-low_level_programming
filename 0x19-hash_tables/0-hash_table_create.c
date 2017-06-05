#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of has table
 *
 * Return: pointer tp hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/* allocate space for hash_table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* allocate sapce for array */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);

	/* assign and iterate through size of array */
	hash_table->size = size;

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
