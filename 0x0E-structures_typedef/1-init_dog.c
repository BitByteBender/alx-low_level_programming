#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - func that inits members of a dog struct
 * @d: pointer to the dog struct to be init
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
