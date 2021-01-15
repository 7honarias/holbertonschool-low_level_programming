#include "hash_tables.h"
/**
 * hash_table_set - set new item hash
 * @ht: table
 * @key: key of item
 * @value: value of key
 *
 * Return: int 1 if success
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index_key = 0;

	if (ht && key)
	{
		index_key = key_index((unsigned char *)key, ht->size);
		temp = ht->array[index_key];
		while (temp)
		{
			if (temp->key == key)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		if (new_node->key == NULL || new_node->value == NULL)
			return (0);
		new_node->next = ht->array[index_key];
		ht->array[index_key] = new_node;
		return (1);
	}
	return (0);
}
