#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint
 * @head: head of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
