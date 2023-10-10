#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int ln, lo;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (ln = 0; name[ln]; ln++)
		;
	for (lo = 0; owner[lo]; lo++)
		;
	d->name = malloc(sizeof(char) * (ln + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (lo + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (ln = 0; name[ln]; ln++)
		d->name[ln] = name[ln];
	d->name[ln] = '\0';
	for (lo = 0; owner[lo]; lo++)
		d->owner[lo] = owner[lo];
	d->owner[lo] = '\0';
	d->age = age;
	return (d);
}
