#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
