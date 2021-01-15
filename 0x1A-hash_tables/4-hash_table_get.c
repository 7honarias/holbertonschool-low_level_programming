#include "hash_tables.h"
/**
 * hash_table_get - get or retrieve elemeent  associated with the key
 * @ht: hash table we want to look into
 * @key: Key Value i'm looking for
 * Description: return the index where is located
 * Return: Return the value with the associated elemetn or Null if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned int index;

	if (ht && key)
	{
		index = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[index];
		if (tmp == NULL)
			return (NULL);
		while (strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		return (tmp->value);
	}
	return (NULL);
}
