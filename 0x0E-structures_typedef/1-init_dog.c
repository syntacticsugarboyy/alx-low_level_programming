#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: A function that initializes struct dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
