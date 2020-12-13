#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the list
 * @index: index of the node
 * Return: the nth node of a dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (index > i && temp)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
