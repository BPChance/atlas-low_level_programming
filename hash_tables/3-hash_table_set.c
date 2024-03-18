#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: string to add
 * @value: value of key
 * Return: 1 if success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	
	return (1);
}
