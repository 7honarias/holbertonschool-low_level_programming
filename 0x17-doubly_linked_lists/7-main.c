#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
/*	add_dnodeint_end(&head, 0);*/
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 4096);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
