#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: variables needed for struct dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#define _ISNULL(x)(x == NULL ? "(nil)" : x)

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
