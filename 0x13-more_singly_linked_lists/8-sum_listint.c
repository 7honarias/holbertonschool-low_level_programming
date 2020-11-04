# include "lists.h"

/**
 * sum_listint - sum list
 * @head: list
 * Return: sum of list or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = NULL;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
