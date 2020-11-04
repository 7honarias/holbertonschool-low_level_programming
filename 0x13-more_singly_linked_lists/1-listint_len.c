#include "lists.h"

/**
 * listint_len - number of element
 * @h: header of list
 * Return: number
 */

unsigned long listint_len(const listint_t *h)
{
	unsigned long i = 0;
	const listint_t *temp = NULL;

	temp = h;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}



	return (i);
}
