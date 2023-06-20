#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct dog - dogs
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog's owner
 *
 * Description: A struct containing data of different dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
