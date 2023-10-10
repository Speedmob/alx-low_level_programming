#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints vars of var struct dog
 * @d: struct dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", _ISNULL(d->name), d->age, _ISNULL(d->owner));
}
