#include "lists.h"

/**
 * _len - this count of chars of string
 * @s: string
 * Return: int
 */
int _len(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		++s;
	}
	return (i);
}

/**
 * createNode - create new nodo
 * @str: string
 * Return: list of item of list_t
 *
 */

list_t *createNode(const char *str)
{
	list_t *new = NULL;

	new = (list_t *)malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _len(str);
		new->next = NULL;
	}
	else
	{
		return (NULL);
	}
	return (new);
}


/**
 * add_node_end - function that adds a new node a the end
 * @head: head of list
 * @str: string of list
 * Return: addres of the new element or NULL if it faliled
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *temp = *head;

	if (!head)
		return (NULL);
	new = createNode(str);
	if (temp == NULL)
	{
		*head = new;
	}
	else if (new != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
