#include "hash_tables.h"

/**
 * hash_table_create - function with one argument size
 * @size: size of array
 *
 * Description: creates a hash table
 * Return: pointer to new hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;
	hash_node_t **h_node = NULL;

	/**create and allocate memory space of the node**/
	h_node = calloc(size, sizeof(char *));
	if (h_node == NULL)
	{
		free(h_node);
		return (NULL);
	}
	h_table = calloc(1, sizeof(hash_table_t));
	if (h_table == NULL)
	{
		free(h_table);
		return (NULL);
	}

	h_table->size = size;
	h_table->array = h_node;
	return (h_table);
}
