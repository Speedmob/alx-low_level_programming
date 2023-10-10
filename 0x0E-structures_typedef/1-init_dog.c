#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable of type struct dog to initialize
 * @name: name of variable dog
 * @age: age of variable dog
 * @owner: owner of variable dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	d->owner = owner;
}
