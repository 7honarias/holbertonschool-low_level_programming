#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of the list
 * @index: index to delete
 * Return: 0 if success and 1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (*head && head)
	{
		temp = *head;
		if (index == 0)
		{
			*head = temp->next;
			if (temp->next == NULL)
				temp->next->prev = NULL;
			free(temp);

		}
		else
		{
			while (i < index)
			{
				temp = temp->next;
				if (temp == NULL)
				{
					return (-1);
				}
				i++;
			}
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
		}
		return (1);
	}
	return (-1);
}
