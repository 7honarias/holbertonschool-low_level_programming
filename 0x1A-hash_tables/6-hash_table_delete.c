#include "hash_tables.h"
/**
 * hash_table_delete - function do free memory
 * @ht: table to delete
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *head = NULL;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
