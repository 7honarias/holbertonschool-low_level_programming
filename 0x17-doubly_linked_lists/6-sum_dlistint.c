#include "lists.h"

/**
 * sum_dlistint - sum values of the list
 * @head: head of the list
 * Return: int sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
