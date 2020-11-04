#include "lists.h"

/**
 * free_listint2 - free memory
 * @head: list of we give
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *p = *head;

	if (*head != NULL)
	{
		while (p)
		{
			temp = p;
			free(temp);
			p = p->next;
		}
	}
}
