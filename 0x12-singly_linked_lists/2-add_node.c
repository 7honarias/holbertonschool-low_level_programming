#include "lists.h"

int _len(const char *s);

/**
 * createNodo - function create new nodo
 * @str: string for include in the nodo
 * Return: list
 */

list_t *createNodo(const char *str)
{
	list_t *new = NULL;

	new = (list_t *)malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _len(str);
		new->next = NULL;
	}
	return (new);
}
/**
 * add_node - adds a new node at the beginnin
 * @head: of node
 * @str: string
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = createNodo(str);
	if (new != NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}

/**
 * _len - count of string
 * @s: string
 * Return: int number
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
