#include "lists.h"

/**
 * delete_nodeint_at_index - delete index
 * @head: list
 * @index: index for delete
 * Return: 1 if success or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i != (index - 1))
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (-1);
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
