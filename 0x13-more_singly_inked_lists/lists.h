# ifndef __LISTS__
# define __LISTS__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


unsigned long print_listint(const listint_t *h);
int listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
