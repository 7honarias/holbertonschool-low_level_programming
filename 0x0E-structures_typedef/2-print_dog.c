#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a struct dog
 * @d: dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %s", "(nil)");
	else
		printf("Owner: %s\n", d->name);
}
