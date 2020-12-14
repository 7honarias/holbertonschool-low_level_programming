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
	unsigned int j = 1;

	if (*h && h)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		temp1 = (*h)->next;
		temp = *h;
		if (idx == 0)
		{
			return (add_dnodeint(h, n));
		}

		while (temp1 != NULL)
		{
			if (j == idx)
			{
				new->next = temp1;
				new->prev = temp;
				temp->next = new;
				temp1->prev = new;
				return (new);
			}
			j++;
			temp = temp->next;
			temp1 = temp1->next;
		}
		if (j == idx)
		{
			return (add_dnodeint_end(h, n));
		}
	}
	return (NULL);
}
