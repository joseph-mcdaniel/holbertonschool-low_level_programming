#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;
	/*beginning of hash table */
	printf("{");
	/* loop through until NULL */
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i]; /* go through index */
		while (temp != NULL)
		{

			printf("'%s': '%s',", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
