#include "dog.h"

/**
 * new_dog - New dog
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 *
 * Description: A function that creates a new dog
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int index_n;
	int index_o;
	int i;
	int j;

	for (index_n = 0; name[index_n] != '\0'; index_n++);

	for (index_o = 0; owner[index_o] != '\0'; index_o++);

	new = malloc(sizeof(struct dog));
	if (new == NULL)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * (index_n + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (index_o + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	for (i = 0; i <= index_n; i++)
	{
		new->name[i] = name[i];
	}

	for (j = 0; j <= index_o; j++)
	{
		new->owner[j] = owner[j];
	}

	new->age = age;

	return (new);
}
