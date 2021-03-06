#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_dlistint - print all list
 * @h: is the list
 * Return: int of number items in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
