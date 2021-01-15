#include "hash_tables.h"
/**
 * key_index - function show key index
 * @key: key of hash
 * @size: size of array
 * Return: int index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int djd = 0;

	djd = hash_djb2(key);

	index = djd % size;
	return (index);
}
