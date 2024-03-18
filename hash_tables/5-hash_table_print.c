#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int first;
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	first = 1;

	for (i = 0; i < ht->size; i++)
	{
		*node = ht->array[i];

		while (node != NULL)
		{
			if (!first)
				printf(", ");

			printf("'%s: '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
