#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to struct
 *
 * Description: A function that frees dogs
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
