# include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable
 * @d: array
 * @name: array name
 * @age: age of dog
 * @owner: name of owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}
