#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: list of int
 * @n: number to add
 * Return: return new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = (*head);

	*head = new;

	return (new);
}
