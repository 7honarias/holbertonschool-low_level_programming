#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 * @head: list headd
 * @n: number to add.
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
	}
	*head = new;

	return (new);
}
