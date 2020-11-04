#include "lists.h"

/**
 * free_listint - free for list
 * @head: list
 * Return: Nothing
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head)
		{
			temp = head;
			free(temp);
			head = head->next;
		}
	}
}
