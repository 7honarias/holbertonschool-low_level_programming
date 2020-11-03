#include "lists.h"

/**
 * print_listint - print all the elements
 * @h: list head
 * Return: number of nodes
 */

unsigned long print_listint(const listint_t *h)
{
	unsigned long i = 0;
	const listint_t *temp = NULL;

	temp = h;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
