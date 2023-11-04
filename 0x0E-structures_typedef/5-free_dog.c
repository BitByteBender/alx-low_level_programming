#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - a function that frees allocated memory
 * @d: a pointer to dog struct
 * frees if allocated memory for dog struct and its members
 * checks if @d is NULL
 * frees memory for dog's name, dog's owner and then frees struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
