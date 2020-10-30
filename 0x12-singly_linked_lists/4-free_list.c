#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: list give
 * Return: Nothing void
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head)
		{
			temp = head;
			free(temp->str);
			free(temp);

			head = head->next;
		}
	}

}
