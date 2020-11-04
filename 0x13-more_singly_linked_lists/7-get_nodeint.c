#include "lists.h"
/**
 * get_nodeint_at_index - search node of list
 * @head: list
 * @index: index
 * Return: pointer to list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new = NULL;

	if (head == NULL)
		return (new);

	new = head;
	while (i < index)
	{
		new = new->next;
		i++;
	}
	return (new);
}
