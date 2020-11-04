#include "lists.h"

/**
 * pop_listint - delete a nodo
 * @head: list
 * Return: number delete
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head != NULL)
	{
		tmp = *head;
		i = tmp->n;
		*head = tmp->next;
		free(tmp);

	}
	else
	{
		return (0);
	}
	return (i);
}
