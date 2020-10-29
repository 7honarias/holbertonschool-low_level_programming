#include "lists.h"
/**
 * add_node - adds a new node at the beginnin
 * @head: of node
 * @str: string
 * Return: list
 */
int _len(const char *s);

list_t* createNodo(const char *str)
{
	list_t *new = NULL;

	new = (list_t*)malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _len(str);
		new->next = NULL;
	}
	return (new);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t* new = NULL;

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
