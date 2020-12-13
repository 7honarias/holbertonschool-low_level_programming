#include "lists.h"

/**
 * dlistint_len - count the number of item
 * @h: head of list
 * Return: number of item
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
