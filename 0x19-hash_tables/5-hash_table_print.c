#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int comma;
	hash_node_t *temp;

	comma = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp != NULL; temp = temp->next)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			comma = 1;
		}
	printf("}\n");
}
