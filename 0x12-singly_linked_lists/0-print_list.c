#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/*
 * print_list - print all item of list
 * @h:list
 * Return: number of element
 */

int print_list(const list_t *h)
{
	const list_t *nAUX = NULL;
	int i = 0;

	nAUX = h;

	while (nAUX != NULL)
	{
		if(nAUX->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nAUX->len, nAUX->str);
		}
		i++;
		nAUX = nAUX->next;
        }
	return (i);

}
