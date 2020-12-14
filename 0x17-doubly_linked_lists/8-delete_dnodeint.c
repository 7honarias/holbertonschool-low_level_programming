#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of the list
 * @index: index to delete
 * Return: 0 if success and 1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2 = NULL;
	dlistint_t *temp3 = NULL;
	unsigned int i = 1;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
		temp2 = temp->next;
		temp2->prev = NULL;
		*head = temp2;
		free(temp);
		return (1);
	}
	while (temp)
	{
		temp2 = temp->next;
		if (temp2->next == NULL)
		{
			temp->next = NULL;
			free(temp2);
			return (1);
		}
		temp3 = temp2->next;
		if (i == (index))
		{
			temp->next = temp3;
			temp3->prev = temp;
			free(temp2);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
