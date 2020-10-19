#ifndef _MY_DOG_H
#define _MY_DOG_H

/**
 * struct dog - struct for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
