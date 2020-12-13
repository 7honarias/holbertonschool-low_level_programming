#include "lists.h"

/**
 * insert_dnodeint_at_index - inser node at index
 * @h: is pointer to head
 * @idx: index of item
 * @n: number to add
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *temp1 = NULL;
	dlistint_t *new = NULL;
	unsigned int j = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (temp)
	{
		temp1 = temp;
		if (j == (idx - 1))
		{
			temp1 = temp->next;
			new->next = temp1;
			new->prev = temp;
			temp->next = new;
			temp1->prev = new;
			return (new);
		}
		j++;
		temp = temp->next;
	}
	return (NULL);
}
