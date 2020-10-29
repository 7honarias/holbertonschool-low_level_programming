#include "lists.h"
/*
 * list_len  number of elements in a linked list
 * @h: list
 * Return: number of elements
 *
 */

int list_len(const list_t *h)
{
	int i = 0;
	const list_t *nAux = NULL;

	nAux = h;

	while (nAux != NULL)
	{
		i++;
		nAux = nAux->next;
	}
	return (i);
}
