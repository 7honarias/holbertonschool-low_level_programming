#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;

	if (name == NULL)
		if (owner == NULL)
			return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);

}
