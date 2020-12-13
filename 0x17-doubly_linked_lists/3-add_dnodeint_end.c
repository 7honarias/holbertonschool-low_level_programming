#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head list
 * @n: number to add
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->prev = temp;
	new->next = NULL;
	temp->next = new;

	return (new);
}
