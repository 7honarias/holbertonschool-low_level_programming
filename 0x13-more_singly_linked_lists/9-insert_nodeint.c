#include "lists.h"

/**
 * insert_nodeint_at_index - insert node index
 * @head: list
 * @idx: index position
 * @n: number to insert
 * Return: new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *temp = *head;
	listint_t *new = NULL;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < idx)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		i++;

	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
